// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.HDROutputSettings
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Experimental.Rendering;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x20000D7")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/GfxDevice/HDROutputSettings.h")]
public class HDROutputSettings
{
	[Token(Token = "0x4000233")]
	[FieldOffset(Offset = "0x10")]
	private int m_DisplayIndex;

	[Token(Token = "0x4000234")]
	[FieldOffset(Offset = "0x0")]
	public static HDROutputSettings[] displays;

	[Token(Token = "0x4000235")]
	[FieldOffset(Offset = "0x8")]
	private static HDROutputSettings _mainDisplay;

	[Token(Token = "0x170000C8")]
	public static HDROutputSettings main
	{
		[Token(Token = "0x60004AD")]
		[Address(RVA = "0x2ECB7D0", Offset = "0x2EC9DD0", VA = "0x182ECB7D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C9")]
	public bool active
	{
		[Token(Token = "0x60004AE")]
		[Address(RVA = "0x2ECB5A0", Offset = "0x2EC9BA0", VA = "0x182ECB5A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000CA")]
	public bool available
	{
		[Token(Token = "0x60004AF")]
		[Address(RVA = "0x2ECB680", Offset = "0x2EC9C80", VA = "0x182ECB680")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000CB")]
	public bool automaticHDRTonemapping
	{
		[Token(Token = "0x60004B0")]
		[Address(RVA = "0x2ECB610", Offset = "0x2EC9C10", VA = "0x182ECB610")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004B1")]
		[Address(RVA = "0x2ECB9E0", Offset = "0x2EC9FE0", VA = "0x182ECB9E0")]
		set
		{
		}
	}

	[Token(Token = "0x170000CC")]
	public ColorGamut displayColorGamut
	{
		[Token(Token = "0x60004B2")]
		[Address(RVA = "0x2ECB6F0", Offset = "0x2EC9CF0", VA = "0x182ECB6F0")]
		get
		{
			return default(ColorGamut);
		}
	}

	[Token(Token = "0x170000CD")]
	public GraphicsFormat graphicsFormat
	{
		[Token(Token = "0x60004B3")]
		[Address(RVA = "0x2ECB760", Offset = "0x2EC9D60", VA = "0x182ECB760")]
		get
		{
			return default(GraphicsFormat);
		}
	}

	[Token(Token = "0x170000CE")]
	public float paperWhiteNits
	{
		[Token(Token = "0x60004B4")]
		[Address(RVA = "0x2ECB970", Offset = "0x2EC9F70", VA = "0x182ECB970")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000CF")]
	public int maxFullFrameToneMapLuminance
	{
		[Token(Token = "0x60004B5")]
		[Address(RVA = "0x2ECB820", Offset = "0x2EC9E20", VA = "0x182ECB820")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000D0")]
	public int maxToneMapLuminance
	{
		[Token(Token = "0x60004B6")]
		[Address(RVA = "0x2ECB890", Offset = "0x2EC9E90", VA = "0x182ECB890")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000D1")]
	public int minToneMapLuminance
	{
		[Token(Token = "0x60004B7")]
		[Address(RVA = "0x2ECB900", Offset = "0x2EC9F00", VA = "0x182ECB900")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000D2")]
	public bool HDRModeChangeRequested
	{
		[Token(Token = "0x60004B8")]
		[Address(RVA = "0x2ECB530", Offset = "0x2EC9B30", VA = "0x182ECB530")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60004AB")]
	[Address(RVA = "0x2B13C80", Offset = "0x2B12280", VA = "0x182B13C80")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.XRModule" })]
	internal HDROutputSettings()
	{
	}

	[Token(Token = "0x60004AC")]
	[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.XRModule" })]
	internal HDROutputSettings(int displayIndex)
	{
	}

	[Token(Token = "0x60004B9")]
	[Address(RVA = "0x2ECB340", Offset = "0x2EC9940", VA = "0x182ECB340")]
	public void RequestHDRModeChange(bool enabled)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004BA")]
	[Address(RVA = "0x2ECB080", Offset = "0x2EC9680", VA = "0x182ECB080")]
	[UnityEngine.Bindings.FreeFunction("HDROutputSettingsBindings::GetActive", HasExplicitThis = false, ThrowsException = true)]
	private static extern bool GetActive(int displayIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004BB")]
	[Address(RVA = "0x2ECB100", Offset = "0x2EC9700", VA = "0x182ECB100")]
	[UnityEngine.Bindings.FreeFunction("HDROutputSettingsBindings::GetAvailable", HasExplicitThis = false, ThrowsException = true)]
	private static extern bool GetAvailable(int displayIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004BC")]
	[Address(RVA = "0x2ECB0C0", Offset = "0x2EC96C0", VA = "0x182ECB0C0")]
	[UnityEngine.Bindings.FreeFunction("HDROutputSettingsBindings::GetAutomaticHDRTonemapping", HasExplicitThis = false, ThrowsException = true)]
	private static extern bool GetAutomaticHDRTonemapping(int displayIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004BD")]
	[Address(RVA = "0x2ECB3C0", Offset = "0x2EC99C0", VA = "0x182ECB3C0")]
	[UnityEngine.Bindings.FreeFunction("HDROutputSettingsBindings::SetAutomaticHDRTonemapping", HasExplicitThis = false, ThrowsException = true)]
	private static extern void SetAutomaticHDRTonemapping(int displayIndex, bool scripted);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004BE")]
	[Address(RVA = "0x2ECB140", Offset = "0x2EC9740", VA = "0x182ECB140")]
	[UnityEngine.Bindings.FreeFunction("HDROutputSettingsBindings::GetDisplayColorGamut", HasExplicitThis = false, ThrowsException = true)]
	private static extern ColorGamut GetDisplayColorGamut(int displayIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004BF")]
	[Address(RVA = "0x2ECB180", Offset = "0x2EC9780", VA = "0x182ECB180")]
	[UnityEngine.Bindings.FreeFunction("HDROutputSettingsBindings::GetGraphicsFormat", HasExplicitThis = false, ThrowsException = true)]
	private static extern GraphicsFormat GetGraphicsFormat(int displayIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004C0")]
	[Address(RVA = "0x2ECB2C0", Offset = "0x2EC98C0", VA = "0x182ECB2C0")]
	[UnityEngine.Bindings.FreeFunction("HDROutputSettingsBindings::GetPaperWhiteNits", HasExplicitThis = false, ThrowsException = true)]
	private static extern float GetPaperWhiteNits(int displayIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004C1")]
	[Address(RVA = "0x2ECB200", Offset = "0x2EC9800", VA = "0x182ECB200")]
	[UnityEngine.Bindings.FreeFunction("HDROutputSettingsBindings::GetMaxFullFrameToneMapLuminance", HasExplicitThis = false, ThrowsException = true)]
	private static extern int GetMaxFullFrameToneMapLuminance(int displayIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004C2")]
	[Address(RVA = "0x2ECB240", Offset = "0x2EC9840", VA = "0x182ECB240")]
	[UnityEngine.Bindings.FreeFunction("HDROutputSettingsBindings::GetMaxToneMapLuminance", HasExplicitThis = false, ThrowsException = true)]
	private static extern int GetMaxToneMapLuminance(int displayIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004C3")]
	[Address(RVA = "0x2ECB280", Offset = "0x2EC9880", VA = "0x182ECB280")]
	[UnityEngine.Bindings.FreeFunction("HDROutputSettingsBindings::GetMinToneMapLuminance", HasExplicitThis = false, ThrowsException = true)]
	private static extern int GetMinToneMapLuminance(int displayIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004C4")]
	[Address(RVA = "0x2ECB1C0", Offset = "0x2EC97C0", VA = "0x182ECB1C0")]
	[UnityEngine.Bindings.FreeFunction("HDROutputSettingsBindings::GetHDRModeChangeRequested", HasExplicitThis = false, ThrowsException = true)]
	private static extern bool GetHDRModeChangeRequested(int displayIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004C5")]
	[Address(RVA = "0x2ECB300", Offset = "0x2EC9900", VA = "0x182ECB300")]
	[UnityEngine.Bindings.FreeFunction("HDROutputSettingsBindings::RequestHDRModeChange", HasExplicitThis = false, ThrowsException = true)]
	private static extern void RequestHDRModeChangeInternal(int displayIndex, bool enabled);
}
