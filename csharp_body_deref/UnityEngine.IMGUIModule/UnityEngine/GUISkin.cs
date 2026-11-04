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
[UnityEngine.Scripting.RequiredByNativeCode]
[ExecuteInEditMode]
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
		[Address(RVA = "0x1536BF0", Offset = "0x15351F0", VA = "0x181536BF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000125")]
		[Address(RVA = "0x2F8EE50", Offset = "0x2F8D450", VA = "0x182F8EE50")]
		set
		{
		}
	}

	[Token(Token = "0x1700003E")]
	public GUIStyle box
	{
		[Token(Token = "0x6000126")]
		[Address(RVA = "0x2E85240", Offset = "0x2E83840", VA = "0x182E85240")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000127")]
		[Address(RVA = "0x2F8ECD0", Offset = "0x2F8D2D0", VA = "0x182F8ECD0")]
		set
		{
		}
	}

	[Token(Token = "0x1700003F")]
	public GUIStyle label
	{
		[Token(Token = "0x6000128")]
		[Address(RVA = "0xAD2BE0", Offset = "0xAD11E0", VA = "0x180AD2BE0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000129")]
		[Address(RVA = "0x2F8F360", Offset = "0x2F8D960", VA = "0x182F8F360")]
		set
		{
		}
	}

	[Token(Token = "0x17000040")]
	public GUIStyle textField
	{
		[Token(Token = "0x600012A")]
		[Address(RVA = "0xAD2BF0", Offset = "0xAD11F0", VA = "0x180AD2BF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600012B")]
		[Address(RVA = "0x2F8F560", Offset = "0x2F8DB60", VA = "0x182F8F560")]
		set
		{
		}
	}

	[Token(Token = "0x17000041")]
	public GUIStyle textArea
	{
		[Token(Token = "0x600012C")]
		[Address(RVA = "0x2E8E8E0", Offset = "0x2E8CEE0", VA = "0x182E8E8E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600012D")]
		[Address(RVA = "0x2F8F4E0", Offset = "0x2F8DAE0", VA = "0x182F8F4E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000042")]
	public GUIStyle button
	{
		[Token(Token = "0x600012E")]
		[Address(RVA = "0x2E8E8B0", Offset = "0x2E8CEB0", VA = "0x182E8E8B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600012F")]
		[Address(RVA = "0x2F8ED50", Offset = "0x2F8D350", VA = "0x182F8ED50")]
		set
		{
		}
	}

	[Token(Token = "0x17000043")]
	public GUIStyle toggle
	{
		[Token(Token = "0x6000130")]
		[Address(RVA = "0xD0ECE0", Offset = "0xD0D2E0", VA = "0x180D0ECE0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000131")]
		[Address(RVA = "0x2F8F5E0", Offset = "0x2F8DBE0", VA = "0x182F8F5E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000044")]
	public GUIStyle window
	{
		[Token(Token = "0x6000132")]
		[Address(RVA = "0x2E8E900", Offset = "0x2E8CF00", VA = "0x182E8E900")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000133")]
		[Address(RVA = "0x2F8F9E0", Offset = "0x2F8DFE0", VA = "0x182F8F9E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000045")]
	public GUIStyle horizontalSlider
	{
		[Token(Token = "0x6000134")]
		[Address(RVA = "0x2E8E8F0", Offset = "0x2E8CEF0", VA = "0x182E8E8F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000135")]
		[Address(RVA = "0x2F8F2E0", Offset = "0x2F8D8E0", VA = "0x182F8F2E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000046")]
	public GUIStyle horizontalSliderThumb
	{
		[Token(Token = "0x6000136")]
		[Address(RVA = "0x2E8E910", Offset = "0x2E8CF10", VA = "0x182E8E910")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000137")]
		[Address(RVA = "0x2F8F260", Offset = "0x2F8D860", VA = "0x182F8F260")]
		set
		{
		}
	}

	[Token(Token = "0x17000047")]
	internal GUIStyle horizontalSliderThumbExtent
	{
		[Token(Token = "0x6000138")]
		[Address(RVA = "0x2E8E920", Offset = "0x2E8CF20", VA = "0x182E8E920")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000139")]
		[Address(RVA = "0x2F8F1E0", Offset = "0x2F8D7E0", VA = "0x182F8F1E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000048")]
	internal GUIStyle sliderMixed
	{
		[Token(Token = "0x600013A")]
		[Address(RVA = "0x2E8E8C0", Offset = "0x2E8CEC0", VA = "0x182E8E8C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600013B")]
		[Address(RVA = "0x2F8F460", Offset = "0x2F8DA60", VA = "0x182F8F460")]
		set
		{
		}
	}

	[Token(Token = "0x17000049")]
	public GUIStyle verticalSlider
	{
		[Token(Token = "0x600013C")]
		[Address(RVA = "0x2E8E930", Offset = "0x2E8CF30", VA = "0x182E8E930")]
		get
		{
			return null;
		}
		[Token(Token = "0x600013D")]
		[Address(RVA = "0x2F8F960", Offset = "0x2F8DF60", VA = "0x182F8F960")]
		set
		{
		}
	}

	[Token(Token = "0x1700004A")]
	public GUIStyle verticalSliderThumb
	{
		[Token(Token = "0x600013E")]
		[Address(RVA = "0x2E8E8D0", Offset = "0x2E8CED0", VA = "0x182E8E8D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600013F")]
		[Address(RVA = "0x2F8F8E0", Offset = "0x2F8DEE0", VA = "0x182F8F8E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700004B")]
	internal GUIStyle verticalSliderThumbExtent
	{
		[Token(Token = "0x6000140")]
		[Address(RVA = "0x2E8E8A0", Offset = "0x2E8CEA0", VA = "0x182E8E8A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000141")]
		[Address(RVA = "0x2F8F860", Offset = "0x2F8DE60", VA = "0x182F8F860")]
		set
		{
		}
	}

	[Token(Token = "0x1700004C")]
	public GUIStyle horizontalScrollbar
	{
		[Token(Token = "0x6000142")]
		[Address(RVA = "0x1CCD7A0", Offset = "0x1CCBDA0", VA = "0x181CCD7A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000143")]
		[Address(RVA = "0x2F8F160", Offset = "0x2F8D760", VA = "0x182F8F160")]
		set
		{
		}
	}

	[Token(Token = "0x1700004D")]
	public GUIStyle horizontalScrollbarThumb
	{
		[Token(Token = "0x6000144")]
		[Address(RVA = "0x1CCD790", Offset = "0x1CCBD90", VA = "0x181CCD790")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000145")]
		[Address(RVA = "0x2F8F0E0", Offset = "0x2F8D6E0", VA = "0x182F8F0E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700004E")]
	public GUIStyle horizontalScrollbarLeftButton
	{
		[Token(Token = "0x6000146")]
		[Address(RVA = "0x2E8CB50", Offset = "0x2E8B150", VA = "0x182E8CB50")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000147")]
		[Address(RVA = "0x2F8EFE0", Offset = "0x2F8D5E0", VA = "0x182F8EFE0")]
		set
		{
		}
	}

	[Token(Token = "0x1700004F")]
	public GUIStyle horizontalScrollbarRightButton
	{
		[Token(Token = "0x6000148")]
		[Address(RVA = "0x2E8CB60", Offset = "0x2E8B160", VA = "0x182E8CB60")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000149")]
		[Address(RVA = "0x2F8F060", Offset = "0x2F8D660", VA = "0x182F8F060")]
		set
		{
		}
	}

	[Token(Token = "0x17000050")]
	public GUIStyle verticalScrollbar
	{
		[Token(Token = "0x600014A")]
		[Address(RVA = "0x2E8A930", Offset = "0x2E88F30", VA = "0x182E8A930")]
		get
		{
			return null;
		}
		[Token(Token = "0x600014B")]
		[Address(RVA = "0x2F8F7E0", Offset = "0x2F8DDE0", VA = "0x182F8F7E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000051")]
	public GUIStyle verticalScrollbarThumb
	{
		[Token(Token = "0x600014C")]
		[Address(RVA = "0x2E8A940", Offset = "0x2E88F40", VA = "0x182E8A940")]
		get
		{
			return null;
		}
		[Token(Token = "0x600014D")]
		[Address(RVA = "0x2F8F6E0", Offset = "0x2F8DCE0", VA = "0x182F8F6E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000052")]
	public GUIStyle verticalScrollbarUpButton
	{
		[Token(Token = "0x600014E")]
		[Address(RVA = "0x2F8ECC0", Offset = "0x2F8D2C0", VA = "0x182F8ECC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600014F")]
		[Address(RVA = "0x2F8F760", Offset = "0x2F8DD60", VA = "0x182F8F760")]
		set
		{
		}
	}

	[Token(Token = "0x17000053")]
	public GUIStyle verticalScrollbarDownButton
	{
		[Token(Token = "0x6000150")]
		[Address(RVA = "0x2F8ECB0", Offset = "0x2F8D2B0", VA = "0x182F8ECB0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000151")]
		[Address(RVA = "0x2F8F660", Offset = "0x2F8DC60", VA = "0x182F8F660")]
		set
		{
		}
	}

	[Token(Token = "0x17000054")]
	public GUIStyle scrollView
	{
		[Token(Token = "0x6000152")]
		[Address(RVA = "0x2F8EC90", Offset = "0x2F8D290", VA = "0x182F8EC90")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000153")]
		[Address(RVA = "0x2F8F3E0", Offset = "0x2F8D9E0", VA = "0x182F8F3E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000055")]
	public GUIStyle[] customStyles
	{
		[Token(Token = "0x6000154")]
		[Address(RVA = "0x2F8EB80", Offset = "0x2F8D180", VA = "0x182F8EB80")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000155")]
		[Address(RVA = "0x2F8EDD0", Offset = "0x2F8D3D0", VA = "0x182F8EDD0")]
		set
		{
		}
	}

	[Token(Token = "0x17000056")]
	public GUISettings settings
	{
		[Token(Token = "0x6000156")]
		[Address(RVA = "0x2F8ECA0", Offset = "0x2F8D2A0", VA = "0x182F8ECA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000057")]
	internal static GUIStyle error
	{
		[Token(Token = "0x6000157")]
		[Address(RVA = "0x2F8EB90", Offset = "0x2F8D190", VA = "0x182F8EB90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000121")]
	[Address(RVA = "0x2F8EA80", Offset = "0x2F8D080", VA = "0x182F8EA80")]
	public GUISkin()
	{
	}

	[Token(Token = "0x6000122")]
	[Address(RVA = "0x2F8D110", Offset = "0x2F8B710", VA = "0x182F8D110")]
	internal void OnEnable()
	{
	}

	[Token(Token = "0x6000123")]
	[Address(RVA = "0x2F8E4A0", Offset = "0x2F8CAA0", VA = "0x182F8E4A0")]
	internal static void CleanupRoots()
	{
	}

	[Token(Token = "0x6000158")]
	[Address(RVA = "0x2F8D110", Offset = "0x2F8B710", VA = "0x182F8D110")]
	internal void Apply()
	{
	}

	[Token(Token = "0x6000159")]
	[Address(RVA = "0x2F8D180", Offset = "0x2F8B780", VA = "0x182F8D180")]
	private void BuildStyleCache()
	{
	}

	[Token(Token = "0x600015A")]
	[Address(RVA = "0x2F8E670", Offset = "0x2F8CC70", VA = "0x182F8E670")]
	public GUIStyle GetStyle(string styleName)
	{
		return null;
	}

	[Token(Token = "0x600015B")]
	[Address(RVA = "0x2F8E520", Offset = "0x2F8CB20", VA = "0x182F8E520")]
	public GUIStyle FindStyle(string styleName)
	{
		return null;
	}

	[Token(Token = "0x600015C")]
	[Address(RVA = "0x2F8E950", Offset = "0x2F8CF50", VA = "0x182F8E950")]
	internal void MakeCurrent()
	{
	}

	[Token(Token = "0x600015D")]
	[Address(RVA = "0x2F8E5B0", Offset = "0x2F8CBB0", VA = "0x182F8E5B0")]
	public IEnumerator GetEnumerator()
	{
		return null;
	}
}
