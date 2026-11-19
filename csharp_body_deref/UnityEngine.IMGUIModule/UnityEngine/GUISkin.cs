// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.GUISkin
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine;

[Serializable]
[Token(Token = "0x2000016")]
[UnityEngine.AssetFileNameExtension("guiskin", new string[] { })]
[ExecuteInEditMode]
[UnityEngine.Scripting.RequiredByNativeCode]
public sealed class GUISkin : ScriptableObject
{
	[Token(Token = "0x2000017")]
	internal delegate void SkinChangedDelegate();

	[Token(Token = "0x4000082")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	private Font m_Font;

	[Token(Token = "0x4000083")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private GUIStyle m_box;

	[Token(Token = "0x4000084")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	private GUIStyle m_button;

	[Token(Token = "0x4000085")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	private GUIStyle m_toggle;

	[Token(Token = "0x4000086")]
	[FieldOffset(Offset = "0x38")]
	[SerializeField]
	private GUIStyle m_label;

	[Token(Token = "0x4000087")]
	[FieldOffset(Offset = "0x40")]
	[SerializeField]
	private GUIStyle m_textField;

	[Token(Token = "0x4000088")]
	[FieldOffset(Offset = "0x48")]
	[SerializeField]
	private GUIStyle m_textArea;

	[Token(Token = "0x4000089")]
	[FieldOffset(Offset = "0x50")]
	[SerializeField]
	private GUIStyle m_window;

	[Token(Token = "0x400008A")]
	[FieldOffset(Offset = "0x58")]
	[SerializeField]
	private GUIStyle m_horizontalSlider;

	[Token(Token = "0x400008B")]
	[FieldOffset(Offset = "0x60")]
	[SerializeField]
	private GUIStyle m_horizontalSliderThumb;

	[NonSerialized]
	[Token(Token = "0x400008C")]
	[FieldOffset(Offset = "0x68")]
	private GUIStyle m_horizontalSliderThumbExtent;

	[Token(Token = "0x400008D")]
	[FieldOffset(Offset = "0x70")]
	[SerializeField]
	private GUIStyle m_verticalSlider;

	[Token(Token = "0x400008E")]
	[FieldOffset(Offset = "0x78")]
	[SerializeField]
	private GUIStyle m_verticalSliderThumb;

	[NonSerialized]
	[Token(Token = "0x400008F")]
	[FieldOffset(Offset = "0x80")]
	private GUIStyle m_verticalSliderThumbExtent;

	[NonSerialized]
	[Token(Token = "0x4000090")]
	[FieldOffset(Offset = "0x88")]
	private GUIStyle m_SliderMixed;

	[Token(Token = "0x4000091")]
	[FieldOffset(Offset = "0x90")]
	[SerializeField]
	private GUIStyle m_horizontalScrollbar;

	[Token(Token = "0x4000092")]
	[FieldOffset(Offset = "0x98")]
	[SerializeField]
	private GUIStyle m_horizontalScrollbarThumb;

	[Token(Token = "0x4000093")]
	[FieldOffset(Offset = "0xA0")]
	[SerializeField]
	private GUIStyle m_horizontalScrollbarLeftButton;

	[Token(Token = "0x4000094")]
	[FieldOffset(Offset = "0xA8")]
	[SerializeField]
	private GUIStyle m_horizontalScrollbarRightButton;

	[Token(Token = "0x4000095")]
	[FieldOffset(Offset = "0xB0")]
	[SerializeField]
	private GUIStyle m_verticalScrollbar;

	[Token(Token = "0x4000096")]
	[FieldOffset(Offset = "0xB8")]
	[SerializeField]
	private GUIStyle m_verticalScrollbarThumb;

	[Token(Token = "0x4000097")]
	[FieldOffset(Offset = "0xC0")]
	[SerializeField]
	private GUIStyle m_verticalScrollbarUpButton;

	[Token(Token = "0x4000098")]
	[FieldOffset(Offset = "0xC8")]
	[SerializeField]
	private GUIStyle m_verticalScrollbarDownButton;

	[Token(Token = "0x4000099")]
	[FieldOffset(Offset = "0xD0")]
	[SerializeField]
	private GUIStyle m_ScrollView;

	[Token(Token = "0x400009A")]
	[FieldOffset(Offset = "0xD8")]
	[SerializeField]
	internal GUIStyle[] m_CustomStyles;

	[Token(Token = "0x400009B")]
	[FieldOffset(Offset = "0xE0")]
	[SerializeField]
	private GUISettings m_Settings;

	[Token(Token = "0x400009C")]
	[FieldOffset(Offset = "0x0")]
	internal static GUIStyle ms_Error;

	[Token(Token = "0x400009D")]
	[FieldOffset(Offset = "0xE8")]
	private Dictionary<string, GUIStyle> m_Styles;

	[Token(Token = "0x400009E")]
	[FieldOffset(Offset = "0x8")]
	internal static SkinChangedDelegate m_SkinChanged;

	[Token(Token = "0x400009F")]
	[FieldOffset(Offset = "0x10")]
	internal static GUISkin current;

	[Token(Token = "0x1700003D")]
	public Font font
	{
		[Token(Token = "0x6000124")]
		[Address(RVA = "0x6982CD0", Offset = "0x6981CD0", VA = "0x6982CD0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000125")]
		[Address(RVA = "0x6990710", Offset = "0x698F710", VA = "0x6990710")]
		set
		{
		}
	}

	[Token(Token = "0x1700003E")]
	public GUIStyle box
	{
		[Token(Token = "0x6000126")]
		[Address(RVA = "0x697EE50", Offset = "0x697DE50", VA = "0x697EE50")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000127")]
		[Address(RVA = "0x6990A00", Offset = "0x698FA00", VA = "0x6990A00")]
		set
		{
		}
	}

	[Token(Token = "0x1700003F")]
	public GUIStyle label
	{
		[Token(Token = "0x6000128")]
		[Address(RVA = "0x697D000", Offset = "0x697C000", VA = "0x697D000")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000129")]
		[Address(RVA = "0x6990A90", Offset = "0x698FA90", VA = "0x6990A90")]
		set
		{
		}
	}

	[Token(Token = "0x17000040")]
	public GUIStyle textField
	{
		[Token(Token = "0x600012A")]
		[Address(RVA = "0x6980730", Offset = "0x697F730", VA = "0x6980730")]
		get
		{
			return null;
		}
		[Token(Token = "0x600012B")]
		[Address(RVA = "0x6990B20", Offset = "0x698FB20", VA = "0x6990B20")]
		set
		{
		}
	}

	[Token(Token = "0x17000041")]
	public GUIStyle textArea
	{
		[Token(Token = "0x600012C")]
		[Address(RVA = "0x6990BB0", Offset = "0x698FBB0", VA = "0x6990BB0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600012D")]
		[Address(RVA = "0x6990BC0", Offset = "0x698FBC0", VA = "0x6990BC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000042")]
	public GUIStyle button
	{
		[Token(Token = "0x600012E")]
		[Address(RVA = "0x697F450", Offset = "0x697E450", VA = "0x697F450")]
		get
		{
			return null;
		}
		[Token(Token = "0x600012F")]
		[Address(RVA = "0x6990C50", Offset = "0x698FC50", VA = "0x6990C50")]
		set
		{
		}
	}

	[Token(Token = "0x17000043")]
	public GUIStyle toggle
	{
		[Token(Token = "0x6000130")]
		[Address(RVA = "0x698C1C0", Offset = "0x698B1C0", VA = "0x698C1C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000131")]
		[Address(RVA = "0x6990CE0", Offset = "0x698FCE0", VA = "0x6990CE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000044")]
	public GUIStyle window
	{
		[Token(Token = "0x6000132")]
		[Address(RVA = "0x698DDD0", Offset = "0x698CDD0", VA = "0x698DDD0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000133")]
		[Address(RVA = "0x6990D70", Offset = "0x698FD70", VA = "0x6990D70")]
		set
		{
		}
	}

	[Token(Token = "0x17000045")]
	public GUIStyle horizontalSlider
	{
		[Token(Token = "0x6000134")]
		[Address(RVA = "0x698C510", Offset = "0x698B510", VA = "0x698C510")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000135")]
		[Address(RVA = "0x6990E00", Offset = "0x698FE00", VA = "0x6990E00")]
		set
		{
		}
	}

	[Token(Token = "0x17000046")]
	public GUIStyle horizontalSliderThumb
	{
		[Token(Token = "0x6000136")]
		[Address(RVA = "0x698C520", Offset = "0x698B520", VA = "0x698C520")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000137")]
		[Address(RVA = "0x6990E90", Offset = "0x698FE90", VA = "0x6990E90")]
		set
		{
		}
	}

	[Token(Token = "0x17000047")]
	internal GUIStyle horizontalSliderThumbExtent
	{
		[Token(Token = "0x6000138")]
		[Address(RVA = "0x6990F20", Offset = "0x698FF20", VA = "0x6990F20")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000139")]
		[Address(RVA = "0x6990F30", Offset = "0x698FF30", VA = "0x6990F30")]
		set
		{
		}
	}

	[Token(Token = "0x17000048")]
	internal GUIStyle sliderMixed
	{
		[Token(Token = "0x600013A")]
		[Address(RVA = "0x6990FC0", Offset = "0x698FFC0", VA = "0x6990FC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600013B")]
		[Address(RVA = "0x6990FD0", Offset = "0x698FFD0", VA = "0x6990FD0")]
		set
		{
		}
	}

	[Token(Token = "0x17000049")]
	public GUIStyle verticalSlider
	{
		[Token(Token = "0x600013C")]
		[Address(RVA = "0x6991060", Offset = "0x6990060", VA = "0x6991060")]
		get
		{
			return null;
		}
		[Token(Token = "0x600013D")]
		[Address(RVA = "0x6991070", Offset = "0x6990070", VA = "0x6991070")]
		set
		{
		}
	}

	[Token(Token = "0x1700004A")]
	public GUIStyle verticalSliderThumb
	{
		[Token(Token = "0x600013E")]
		[Address(RVA = "0x6991100", Offset = "0x6990100", VA = "0x6991100")]
		get
		{
			return null;
		}
		[Token(Token = "0x600013F")]
		[Address(RVA = "0x6991110", Offset = "0x6990110", VA = "0x6991110")]
		set
		{
		}
	}

	[Token(Token = "0x1700004B")]
	internal GUIStyle verticalSliderThumbExtent
	{
		[Token(Token = "0x6000140")]
		[Address(RVA = "0x69911A0", Offset = "0x69901A0", VA = "0x69911A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000141")]
		[Address(RVA = "0x69911B0", Offset = "0x69901B0", VA = "0x69911B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700004C")]
	public GUIStyle horizontalScrollbar
	{
		[Token(Token = "0x6000142")]
		[Address(RVA = "0x6986640", Offset = "0x6985640", VA = "0x6986640")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000143")]
		[Address(RVA = "0x6991240", Offset = "0x6990240", VA = "0x6991240")]
		set
		{
		}
	}

	[Token(Token = "0x1700004D")]
	public GUIStyle horizontalScrollbarThumb
	{
		[Token(Token = "0x6000144")]
		[Address(RVA = "0x69912D0", Offset = "0x69902D0", VA = "0x69912D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000145")]
		[Address(RVA = "0x69912E0", Offset = "0x69902E0", VA = "0x69912E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700004E")]
	public GUIStyle horizontalScrollbarLeftButton
	{
		[Token(Token = "0x6000146")]
		[Address(RVA = "0x6991370", Offset = "0x6990370", VA = "0x6991370")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000147")]
		[Address(RVA = "0x6991380", Offset = "0x6990380", VA = "0x6991380")]
		set
		{
		}
	}

	[Token(Token = "0x1700004F")]
	public GUIStyle horizontalScrollbarRightButton
	{
		[Token(Token = "0x6000148")]
		[Address(RVA = "0x6991410", Offset = "0x6990410", VA = "0x6991410")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000149")]
		[Address(RVA = "0x6991420", Offset = "0x6990420", VA = "0x6991420")]
		set
		{
		}
	}

	[Token(Token = "0x17000050")]
	public GUIStyle verticalScrollbar
	{
		[Token(Token = "0x600014A")]
		[Address(RVA = "0x6986650", Offset = "0x6985650", VA = "0x6986650")]
		get
		{
			return null;
		}
		[Token(Token = "0x600014B")]
		[Address(RVA = "0x69914B0", Offset = "0x69904B0", VA = "0x69914B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000051")]
	public GUIStyle verticalScrollbarThumb
	{
		[Token(Token = "0x600014C")]
		[Address(RVA = "0x6991540", Offset = "0x6990540", VA = "0x6991540")]
		get
		{
			return null;
		}
		[Token(Token = "0x600014D")]
		[Address(RVA = "0x6991550", Offset = "0x6990550", VA = "0x6991550")]
		set
		{
		}
	}

	[Token(Token = "0x17000052")]
	public GUIStyle verticalScrollbarUpButton
	{
		[Token(Token = "0x600014E")]
		[Address(RVA = "0x69915E0", Offset = "0x69905E0", VA = "0x69915E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600014F")]
		[Address(RVA = "0x69915F0", Offset = "0x69905F0", VA = "0x69915F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000053")]
	public GUIStyle verticalScrollbarDownButton
	{
		[Token(Token = "0x6000150")]
		[Address(RVA = "0x6991680", Offset = "0x6990680", VA = "0x6991680")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000151")]
		[Address(RVA = "0x6991690", Offset = "0x6990690", VA = "0x6991690")]
		set
		{
		}
	}

	[Token(Token = "0x17000054")]
	public GUIStyle scrollView
	{
		[Token(Token = "0x6000152")]
		[Address(RVA = "0x6986660", Offset = "0x6985660", VA = "0x6986660")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000153")]
		[Address(RVA = "0x6991720", Offset = "0x6990720", VA = "0x6991720")]
		set
		{
		}
	}

	[Token(Token = "0x17000055")]
	public GUIStyle[] customStyles
	{
		[Token(Token = "0x6000154")]
		[Address(RVA = "0x69917B0", Offset = "0x69907B0", VA = "0x69917B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000155")]
		[Address(RVA = "0x69917C0", Offset = "0x69907C0", VA = "0x69917C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000056")]
	public GUISettings settings
	{
		[Token(Token = "0x6000156")]
		[Address(RVA = "0x6982BD0", Offset = "0x6981BD0", VA = "0x6982BD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000057")]
	internal static GUIStyle error
	{
		[Token(Token = "0x6000157")]
		[Address(RVA = "0x6991850", Offset = "0x6990850", VA = "0x6991850")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000121")]
	[Address(RVA = "0x69904C0", Offset = "0x698F4C0", VA = "0x69904C0")]
	public GUISkin()
	{
	}

	[Token(Token = "0x6000122")]
	[Address(RVA = "0x69905A0", Offset = "0x698F5A0", VA = "0x69905A0")]
	internal void OnEnable()
	{
	}

	[Token(Token = "0x6000123")]
	[Address(RVA = "0x69906A0", Offset = "0x698F6A0", VA = "0x69906A0")]
	internal static void CleanupRoots()
	{
	}

	[Token(Token = "0x6000158")]
	[Address(RVA = "0x6990620", Offset = "0x698F620", VA = "0x6990620")]
	internal void Apply()
	{
	}

	[Token(Token = "0x6000159")]
	[Address(RVA = "0x6991A60", Offset = "0x6990A60", VA = "0x6991A60")]
	private void BuildStyleCache()
	{
	}

	[Token(Token = "0x600015A")]
	[Address(RVA = "0x69842A0", Offset = "0x69832A0", VA = "0x69842A0")]
	public GUIStyle GetStyle(string styleName)
	{
		return null;
	}

	[Token(Token = "0x600015B")]
	[Address(RVA = "0x6993C20", Offset = "0x6992C20", VA = "0x6993C20")]
	public GUIStyle FindStyle(string styleName)
	{
		return null;
	}

	[Token(Token = "0x600015C")]
	[Address(RVA = "0x697CA40", Offset = "0x697BA40", VA = "0x697CA40")]
	internal void MakeCurrent()
	{
	}

	[Token(Token = "0x600015D")]
	[Address(RVA = "0x6993CB0", Offset = "0x6992CB0", VA = "0x6993CB0")]
	public IEnumerator GetEnumerator()
	{
		return null;
	}
}
