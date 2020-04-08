object Form1: TForm1
  Left = 508
  Top = 132
  Width = 670
  Height = 437
  Caption = 'Form1'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -13
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 120
  TextHeight = 16
  object Button1: TButton
    Left = 496
    Top = 8
    Width = 121
    Height = 41
    Caption = 'Button1'
    TabOrder = 0
    OnClick = Button1Click
  end
  object DBGrid1: TDBGrid
    Left = 8
    Top = 8
    Width = 465
    Height = 169
    DataSource = DataSource1
    TabOrder = 1
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -13
    TitleFont.Name = 'MS Sans Serif'
    TitleFont.Style = []
  end
  object Memo1: TMemo
    Left = 8
    Top = 192
    Width = 465
    Height = 169
    Lines.Strings = (
      'Memo1')
    TabOrder = 2
  end
  object ASQLite3DB1: TASQLite3DB
    TimeOut = 0
    CharacterEncoding = 'UTF8'
    Database = '.db3'
    DefaultExt = '.db3'
    Version = '3.31.1'
    DriverDLL = 'sqlite3.dll'
    Connected = True
    MustExist = False
    ExecuteInlineSQL = False
    Left = 160
    Top = 16
  end
  object ASQLite3Query1: TASQLite3Query
    AutoCommit = False
    SQLiteDateFormat = True
    Connection = ASQLite3DB1
    MaxResults = 0
    StartResult = 0
    TypeLess = False
    SQLCursor = True
    ReadOnly = False
    UniDirectional = False
    RawSQL = False
    Left = 96
    Top = 208
  end
  object DataSource1: TDataSource
    DataSet = ASQLite3Table1
    Left = 248
    Top = 32
  end
  object ASQLite3Table1: TASQLite3Table
    AutoCommit = False
    SQLiteDateFormat = True
    Connection = ASQLite3DB1
    MaxResults = 0
    StartResult = 0
    TypeLess = False
    SQLCursor = True
    ReadOnly = False
    UniDirectional = False
    TableName = 'MyTable'
    PrimaryAutoInc = False
    Left = 240
    Top = 64
  end
end
