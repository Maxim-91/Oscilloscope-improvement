object Form5: TForm5
  Left = 301
  Top = 32
  Width = 1023
  Height = 780
  AutoSize = True
  Caption = #1047#1074#1110#1090
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  Scaled = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 808
    Top = 264
    Width = 84
    Height = 20
    Caption = #1055#1088#1080#1084#1110#1090#1082#1072':'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label2: TLabel
    Left = 816
    Top = 296
    Width = 54
    Height = 13
    Caption = #1052' - '#1052#1110#1076#1100' '
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label3: TLabel
    Left = 816
    Top = 320
    Width = 52
    Height = 13
    Caption = #1057'- '#1057#1090#1072#1083#1100
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label4: TLabel
    Left = 816
    Top = 344
    Width = 74
    Height = 13
    Caption = #1040' - '#1040#1083#1102#1084#1110#1085#1110#1081
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label5: TLabel
    Left = 408
    Top = 0
    Width = 58
    Height = 43
    Caption = #1047#1074#1110#1090
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -32
    Font.Name = '@Arial Unicode MS'
    Font.Style = []
    ParentFont = False
  end
  object Label49: TLabel
    Left = 952
    Top = 728
    Width = 63
    Height = 13
    Caption = 'GrandRaycer'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clRed
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object DBGrid1: TDBGrid
    Left = 0
    Top = 56
    Width = 953
    Height = 193
    Hint = #1041#1072#1079#1072' '#1076#1072#1085#1080#1093' "'#1042#1110#1076#1087#1086#1088#1074#1110#1076#1110' '#1089#1090#1091#1076#1077#1085#1090#1110#1074'" - '#1079#1072#1074#1076#1072#1085#1085#1103' 1'
    DataSource = DataSource1
    ParentShowHint = False
    ShowHint = True
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'MS Sans Serif'
    TitleFont.Style = []
    Columns = <
      item
        Expanded = False
        FieldName = 'Famil'
        Title.Caption = #1055#1088#1110#1079#1074#1080#1097#1077
        Width = 80
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Imya'
        Title.Caption = #1030#1084#39#1103
        Width = 59
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Grupa'
        Title.Caption = #1043#1088#1091#1087#1072
        Width = 47
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Data'
        Title.Caption = #1044#1072#1090#1072' '#1090#1072' '#1095#1072#1089
        Width = 106
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'L'
        Width = 32
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'S'
        Width = 32
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'VvodRpr'
        Title.Caption = #1042#1074#1086#1076' Rpr'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'VuvodRpr'
        Title.Caption = #1055#1088#1072#1074#1080#1083#1100#1085#1077' '#1079#1085#1072#1095'. Rpr'
        Width = 115
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'VvodU1'
        Title.Caption = #1042#1074#1086#1076' U1'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'VvodR'
        Title.Caption = #1042#1074#1086#1076'R'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'VvodI'
        Title.Caption = #1042#1074#1086#1076' I'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'VuvodI'
        Title.Caption = #1055#1088#1072#1074#1080#1083#1100#1085#1077' I'
        Width = 109
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'VvodPsp'
        Title.Caption = #1042#1074#1086#1076' P'#1089#1087'.'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'VvodPpr'
        Title.Caption = #1042#1074#1086#1076' P'#1087#1088'.'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'VvodPdg'
        Title.Caption = #1042#1074#1086#1076' P'#1076#1078'.'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'VvodU2'
        Title.Caption = #1042#1074#1086#1076' U2'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'VuvodPsp'
        Title.Caption = #1055#1088#1072#1074#1080#1083#1100#1085#1077' P'#1089#1087'.'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'VuvodPpr'
        Title.Caption = #1055#1088#1072#1074#1080#1083#1100#1085#1077' P'#1087#1088'.'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'VuvodPdg'
        Title.Caption = #1055#1088#1072#1074#1080#1083#1100#1085#1077' P'#1076#1078'.'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'VuvodPU2'
        Title.Caption = #1055#1088#1072#1074#1080#1083#1100#1085#1077' U2'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'MATERIAL'
        Title.Caption = #1052#1072#1090#1077#1088#1110#1072#1083
        Visible = True
      end>
  end
  object BitBtn1: TBitBtn
    Left = 24
    Top = 264
    Width = 97
    Height = 25
    Hint = #1053#1072#1076#1088#1091#1082#1091#1074#1072#1090#1080' '#1079#1074#1110#1090
    Caption = #1053#1072#1076#1088#1091#1082#1091#1074#1072#1090#1080
    ParentShowHint = False
    ShowHint = True
    TabOrder = 1
    OnClick = BitBtn1Click
    Glyph.Data = {
      76010000424D7601000000000000760000002800000020000000100000000100
      04000000000000010000120B0000120B00001000000000000000000000000000
      800000800000008080008000000080008000808000007F7F7F00BFBFBF000000
      FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00300000000000
      0003377777777777777308888888888888807F33333333333337088888888888
      88807FFFFFFFFFFFFFF7000000000000000077777777777777770F8F8F8F8F8F
      8F807F333333333333F708F8F8F8F8F8F9F07F333333333337370F8F8F8F8F8F
      8F807FFFFFFFFFFFFFF7000000000000000077777777777777773330FFFFFFFF
      03333337F3FFFF3F7F333330F0000F0F03333337F77773737F333330FFFFFFFF
      03333337F3FF3FFF7F333330F00F000003333337F773777773333330FFFF0FF0
      33333337F3F37F3733333330F08F0F0333333337F7337F7333333330FFFF0033
      33333337FFFF7733333333300000033333333337777773333333}
    NumGlyphs = 2
  end
  object BitBtn2: TBitBtn
    Left = 304
    Top = 264
    Width = 97
    Height = 25
    Caption = #1042#1080#1076#1072#1083#1080#1090#1080
    TabOrder = 2
    OnClick = BitBtn2Click
    Glyph.Data = {
      76010000424D7601000000000000760000002800000020000000100000000100
      04000000000000010000120B0000120B00001000000000000000000000000000
      800000800000008080008000000080008000808000007F7F7F00BFBFBF000000
      FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00500005000555
      555557777F777555F55500000000555055557777777755F75555005500055055
      555577F5777F57555555005550055555555577FF577F5FF55555500550050055
      5555577FF77577FF555555005050110555555577F757777FF555555505099910
      555555FF75777777FF555005550999910555577F5F77777775F5500505509990
      3055577F75F77777575F55005055090B030555775755777575755555555550B0
      B03055555F555757575755550555550B0B335555755555757555555555555550
      BBB35555F55555575F555550555555550BBB55575555555575F5555555555555
      50BB555555555555575F555555555555550B5555555555555575}
    NumGlyphs = 2
  end
  object BitBtn3: TBitBtn
    Left = 200
    Top = 264
    Width = 75
    Height = 25
    Hint = #1044#1086#1076#1072#1090#1080' '#1079#1072#1087#1080#1089' '#1074' '#1041#1044
    Caption = #1044#1086#1076#1072#1090#1080' '
    ParentShowHint = False
    ShowHint = True
    TabOrder = 3
    OnClick = BitBtn3Click
    Glyph.Data = {
      76010000424D7601000000000000760000002800000020000000100000000100
      04000000000000010000130B0000130B00001000000000000000000000000000
      800000800000008080008000000080008000808000007F7F7F00BFBFBF000000
      FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00333333333333
      33333333FF33333333FF333993333333300033377F3333333777333993333333
      300033F77FFF3333377739999993333333333777777F3333333F399999933333
      33003777777333333377333993333333330033377F3333333377333993333333
      3333333773333333333F333333333333330033333333F33333773333333C3333
      330033333337FF3333773333333CC333333333FFFFF77FFF3FF33CCCCCCCCCC3
      993337777777777F77F33CCCCCCCCCC3993337777777777377333333333CC333
      333333333337733333FF3333333C333330003333333733333777333333333333
      3000333333333333377733333333333333333333333333333333}
    NumGlyphs = 2
  end
  object BitBtn5: TBitBtn
    Left = 440
    Top = 264
    Width = 89
    Height = 25
    Caption = #1055#1077#1088#1096#1080#1081
    TabOrder = 4
    OnClick = BitBtn5Click
    Glyph.Data = {
      76010000424D7601000000000000760000002800000020000000100000000100
      04000000000000010000120B0000120B00001000000000000000000000000000
      800000800000008080008000000080008000808000007F7F7F00BFBFBF000000
      FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00555555555555
      555555555555555555555555555555555555555555FF55555555555559055555
      55555555577FF5555555555599905555555555557777F5555555555599905555
      555555557777FF5555555559999905555555555777777F555555559999990555
      5555557777777FF5555557990599905555555777757777F55555790555599055
      55557775555777FF5555555555599905555555555557777F5555555555559905
      555555555555777FF5555555555559905555555555555777FF55555555555579
      05555555555555777FF5555555555557905555555555555777FF555555555555
      5990555555555555577755555555555555555555555555555555}
    NumGlyphs = 2
  end
  object BitBtn6: TBitBtn
    Left = 552
    Top = 264
    Width = 75
    Height = 25
    Caption = #1054#1089#1090#1072#1085#1085#1110#1081
    TabOrder = 5
    OnClick = BitBtn6Click
    Glyph.Data = {
      76010000424D7601000000000000760000002800000020000000100000000100
      04000000000000010000130B0000130B00001000000000000000000000000000
      800000800000008080008000000080008000808000007F7F7F00BFBFBF000000
      FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00333333333333
      3333333333FFFFF3333333333999993333333333F77777FFF333333999999999
      3333333777333777FF33339993707399933333773337F3777FF3399933000339
      9933377333777F3377F3399333707333993337733337333337FF993333333333
      399377F33333F333377F993333303333399377F33337FF333373993333707333
      333377F333777F333333993333101333333377F333777F3FFFFF993333000399
      999377FF33777F77777F3993330003399993373FF3777F37777F399933000333
      99933773FF777F3F777F339993707399999333773F373F77777F333999999999
      3393333777333777337333333999993333333333377777333333}
    NumGlyphs = 2
  end
  object Edit1: TEdit
    Left = 24
    Top = 328
    Width = 121
    Height = 21
    TabOrder = 6
  end
  object BitBtn4: TBitBtn
    Left = 184
    Top = 328
    Width = 75
    Height = 25
    Caption = #1055#1086#1096#1091#1082
    TabOrder = 7
    OnClick = BitBtn4Click
    Glyph.Data = {
      76010000424D7601000000000000760000002800000020000000100000000100
      04000000000000010000130B0000130B00001000000000000000000000000000
      800000800000008080008000000080008000808000007F7F7F00BFBFBF000000
      FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00333333333333
      333333333333333333FF33333333333330003FF3FFFFF3333777003000003333
      300077F777773F333777E00BFBFB033333337773333F7F33333FE0BFBF000333
      330077F3337773F33377E0FBFBFBF033330077F3333FF7FFF377E0BFBF000000
      333377F3337777773F3FE0FBFBFBFBFB039977F33FFFFFFF7377E0BF00000000
      339977FF777777773377000BFB03333333337773FF733333333F333000333333
      3300333777333333337733333333333333003333333333333377333333333333
      333333333333333333FF33333333333330003333333333333777333333333333
      3000333333333333377733333333333333333333333333333333}
    NumGlyphs = 2
  end
  object DBGrid2: TDBGrid
    Left = 8
    Top = 392
    Width = 889
    Height = 129
    DataSource = DataSource2
    TabOrder = 8
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'MS Sans Serif'
    TitleFont.Style = []
    Columns = <
      item
        Expanded = False
        FieldName = 'PRIZVUSCHE'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'IMYA'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'GRYPPA'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'DATA'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'VVOD_U1'
        Title.Caption = #1042#1074#1086#1076' U1'
        Width = 75
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'VVOD_K'
        Title.Caption = #1042#1074#1086#1076' K'
        Width = 111
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'VVOD_R'
        Title.Caption = #1042#1074#1086#1076' R'
        Width = 68
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'VVOD_N1'
        Title.Caption = #1042#1074#1086#1076' N1'
        Width = 110
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'VVOD_U2'
        Title.Caption = #1042#1074#1086#1076' U2'
        Width = 73
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'VIRNE_U2'
        Title.Caption = #1042#1110#1088#1085#1077' U2'
        Width = 118
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'VVOD_I2'
        Title.Caption = #1042#1074#1086#1076' I2'
        Width = 62
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'VIRNE_I2'
        Title.Caption = #1042#1110#1088#1085#1077' I2'
        Width = 116
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'VVOD_I1'
        Title.Caption = #1042#1074#1086#1076' I1'
        Width = 66
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'VIRNE_I1'
        Title.Caption = #1042#1110#1088#1085#1077' I1'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'VVOD_P1'
        Title.Caption = #1042#1074#1086#1076' P1'
        Width = 77
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'VIRNE_P1'
        Title.Caption = #1042#1110#1088#1085#1077' P1'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'VVOD_P2'
        Title.Caption = #1042#1074#1086#1076' P2'
        Width = 80
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'VIRNE_P2'
        Title.Caption = #1042#1110#1088#1085#1077' P2'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'VVOD_N2'
        Title.Caption = #1042#1074#1086#1076' N2'
        Width = 95
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'VIRNE_N2'
        Title.Caption = #1042#1110#1088#1085#1077' N2'
        Width = 119
        Visible = True
      end>
  end
  object BitBtn7: TBitBtn
    Left = 144
    Top = 552
    Width = 75
    Height = 25
    Caption = 'BitBtn7'
    TabOrder = 9
  end
  object BitBtn8: TBitBtn
    Left = 256
    Top = 552
    Width = 75
    Height = 25
    Caption = 'BitBtn8'
    TabOrder = 10
  end
  object BitBtn9: TBitBtn
    Left = 376
    Top = 560
    Width = 75
    Height = 25
    Caption = 'BitBtn9'
    TabOrder = 11
  end
  object BitBtn10: TBitBtn
    Left = 504
    Top = 560
    Width = 75
    Height = 25
    Caption = 'BitBtn10'
    TabOrder = 12
  end
  object BitBtn11: TBitBtn
    Left = 624
    Top = 552
    Width = 75
    Height = 25
    Caption = 'BitBtn11'
    TabOrder = 13
  end
  object DBNavigator1: TDBNavigator
    Left = 352
    Top = 528
    Width = 240
    Height = 25
    DataSource = DataSource2
    TabOrder = 14
  end
  object DataSource1: TDataSource
    DataSet = Table1
    Left = 72
    Top = 64
  end
  object Table1: TTable
    Active = True
    TableName = '1 zavd.DB'
    Left = 112
    Top = 64
  end
  object PrintDialog1: TPrintDialog
    Copies = 1
    PrintRange = prSelection
    Left = 32
    Top = 64
  end
  object MainMenu1: TMainMenu
    Left = 232
    Top = 48
    object N1: TMenuItem
      Caption = #1052#1077#1085#1102
      object N7: TMenuItem
        Caption = #1053#1072#1076#1088#1091#1082#1091#1074#1072#1090#1080
      end
    end
    object N2: TMenuItem
      Caption = #1054#1087#1077#1088#1072#1094#1110#1111' '#1079' '#1090#1072#1073#1083#1080#1094#1077#1102
      object N3: TMenuItem
        Caption = #1044#1086#1076#1072#1090#1080' '#1079#1072#1087#1080#1089
        OnClick = N3Click
      end
      object N4: TMenuItem
        Caption = #1042#1080#1076#1072#1083#1080#1090#1080' '#1079#1072#1087#1080#1089
        OnClick = N4Click
      end
      object N11: TMenuItem
        Caption = #1055#1077#1088#1077#1081#1090#1080' '#1076#1086' 1'#1075#1086
        OnClick = N11Click
      end
      object N5: TMenuItem
        Caption = #1055#1077#1088#1077#1081#1090#1080' '#1076#1086' '#1086#1089#1090#1072#1085#1085#1100#1086#1075#1086
        OnClick = N5Click
      end
      object N6: TMenuItem
        Caption = #1055#1086#1096#1091#1082
        OnClick = N6Click
      end
    end
  end
  object Table2: TTable
    Active = True
    TableName = 'zavd_2.DBF'
    Left = 72
    Top = 392
  end
  object DataSource2: TDataSource
    DataSet = Table2
    Left = 72
    Top = 432
  end
end
