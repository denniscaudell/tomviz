/******************************************************************************

  This source file is part of the tomviz project.

  Copyright Kitware, Inc.

  This source code is released under the New BSD License, (the "License").

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

******************************************************************************/

#ifndef tomvizImageStackDialog_h
#define tomvizImageStackDialog_h

#include <QDialog>

#include <QScopedPointer>

namespace Ui {

class ImageStackDialog;
}

namespace tomviz {

class ImageStackModel;

class ImageStackDialog : public QDialog
{
  Q_OBJECT

public:
  explicit ImageStackDialog(QWidget* parent = nullptr,
                            ImageStackModel* tableModel = nullptr);
  ~ImageStackDialog() override;

private slots:

private:
  QScopedPointer<Ui::ImageStackDialog> m_ui;
};
} // namespace tomviz

#endif
