#include <assert.h>
#include "uvwasi.h"
#include "test-common.h"

int main(void) {
  setup_test_environment();

  /* TODO(cjihrig): This test is intended to be temporary. */
  assert(UVWASI_ENOTSUP == uvwasi_sock_recv(NULL, 0, NULL, 0, 0, NULL, NULL));
  assert(UVWASI_ENOTSUP == uvwasi_sock_send(NULL, 0, NULL, 0, 0, NULL));
  assert(UVWASI_ENOTSUP == uvwasi_sock_shutdown(NULL, 0, 0));
  assert(UVWASI_ENOTSUP == uvwasi_sock_accept(NULL, 0, 0, NULL));

  return 0;
}
