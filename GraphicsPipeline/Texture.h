#pragma once

#include <string>

class Texture {
public:
  Texture(const std::string& path);
  ~Texture();

  void bind(unsigned int slot = 0) const;
  void unbind() const;

  inline int getWidht() const { return m_width; }
  inline int getHeight() const { return m_height; }

private:
  unsigned int m_rendererId;
  std::string m_filePath;
  unsigned char* m_localBuffer;
  int m_width;
  int m_height;
  int m_bpp;
};
