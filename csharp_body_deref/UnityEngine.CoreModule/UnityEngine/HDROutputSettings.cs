// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.HDROutputSettings
// Update status: unchanged since the previous dump
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

[Token(Token = "0x20000D8")]
[UnityEngine.Bindings.NativeHeader("Runtime/GfxDevice/HDROutputSettings.h")]
[UnityEngine.Scripting.UsedByNativeCode]
public class HDROutputSettings
{
	[Token(Token = "0x4000238")]
	[FieldOffset(Offset = "0x10")]
	private int m_DisplayIndex;

	[Token(Token = "0x4000239")]
	[FieldOffset(Offset = "0x0")]
	public static HDROutputSettings[] displays;

	[Token(Token = "0x400023A")]
	[FieldOffset(Offset = "0x8")]
	private static HDROutputSettings _mainDisplay;

	[Token(Token = "0x170000CE")]
	public static HDROutputSettings main
	{
		[Token(Token = "0x60004BC")]
		[Address(RVA = "0x68D2B70", Offset = "0x68D1B70", VA = "0x68D2B70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000CF")]
	public bool active
	{
		[Token(Token = "0x60004BD")]
		[Address(RVA = "0x68D2BE0", Offset = "0x68D1BE0", VA = "0x68D2BE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000D0")]
	public bool available
	{
		[Token(Token = "0x60004BE")]
		[Address(RVA = "0x68D2C80", Offset = "0x68D1C80", VA = "0x68D2C80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000D1")]
	public bool automaticHDRTonemapping
	{
		[Token(Token = "0x60004BF")]
		[Address(RVA = "0x68D2D20", Offset = "0x68D1D20", VA = "0x68D2D20")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004C0")]
		[Address(RVA = "0x68D2DC0", Offset = "0x68D1DC0", VA = "0x68D2DC0")]
		set
		{
		}
	}

	[Token(Token = "0x170000D2")]
	public ColorGamut displayColorGamut
	{
		[Token(Token = "0x60004C1")]
		[Address(RVA = "0x68D2E80", Offset = "0x68D1E80", VA = "0x68D2E80")]
		get
		{
			return default(ColorGamut);
		}
	}

	[Token(Token = "0x170000D3")]
	public GraphicsFormat graphicsFormat
	{
		[Token(Token = "0x60004C2")]
		[Address(RVA = "0x68D2F20", Offset = "0x68D1F20", VA = "0x68D2F20")]
		get
		{
			return default(GraphicsFormat);
		}
	}

	[Token(Token = "0x170000D4")]
	public float paperWhiteNits
	{
		[Token(Token = "0x60004C3")]
		[Address(RVA = "0x68D2FC0", Offset = "0x68D1FC0", VA = "0x68D2FC0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000D5")]
	public int maxFullFrameToneMapLuminance
	{
		[Token(Token = "0x60004C4")]
		[Address(RVA = "0x68D3060", Offset = "0x68D2060", VA = "0x68D3060")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000D6")]
	public int maxToneMapLuminance
	{
		[Token(Token = "0x60004C5")]
		[Address(RVA = "0x68D3100", Offset = "0x68D2100", VA = "0x68D3100")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000D7")]
	public int minToneMapLuminance
	{
		[Token(Token = "0x60004C6")]
		[Address(RVA = "0x68D31A0", Offset = "0x68D21A0", VA = "0x68D31A0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000D8")]
	public bool HDRModeChangeRequested
	{
		[Token(Token = "0x60004C7")]
		[Address(RVA = "0x68D3240", Offset = "0x68D2240", VA = "0x68D3240")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60004BA")]
	[Address(RVA = "0x68D2B30", Offset = "0x68D1B30", VA = "0x68D2B30")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.XRModule" })]
	internal HDROutputSettings()
	{
	}

	[Token(Token = "0x60004BB")]
	[Address(RVA = "0x68D2B50", Offset = "0x68D1B50", VA = "0x68D2B50")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.XRModule" })]
	internal HDROutputSettings(int displayIndex)
	{
	}

	[Token(Token = "0x60004C8")]
	[Address(RVA = "0x68D32E0", Offset = "0x68D22E0", VA = "0x68D32E0")]
	public void RequestHDRModeChange(bool enabled)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004C9")]
	[Address(RVA = "0x68D2C50", Offset = "0x68D1C50", VA = "0x68D2C50")]
	[UnityEngine.Bindings.FreeFunction("HDROutputSettingsBindings::GetActive", HasExplicitThis = false, ThrowsException = true)]
	private static extern bool GetActive(int displayIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004CA")]
	[Address(RVA = "0x68D2CF0", Offset = "0x68D1CF0", VA = "0x68D2CF0")]
	[UnityEngine.Bindings.FreeFunction("HDROutputSettingsBindings::GetAvailable", HasExplicitThis = false, ThrowsException = true)]
	private static extern bool GetAvailable(int displayIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004CB")]
	[Address(RVA = "0x68D2D90", Offset = "0x68D1D90", VA = "0x68D2D90")]
	[UnityEngine.Bindings.FreeFunction("HDROutputSettingsBindings::GetAutomaticHDRTonemapping", HasExplicitThis = false, ThrowsException = true)]
	private static extern bool GetAutomaticHDRTonemapping(int displayIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004CC")]
	[Address(RVA = "0x68D2E40", Offset = "0x68D1E40", VA = "0x68D2E40")]
	[UnityEngine.Bindings.FreeFunction("HDROutputSettingsBindings::SetAutomaticHDRTonemapping", HasExplicitThis = false, ThrowsException = true)]
	private static extern void SetAutomaticHDRTonemapping(int displayIndex, bool scripted);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004CD")]
	[Address(RVA = "0x68D2EF0", Offset = "0x68D1EF0", VA = "0x68D2EF0")]
	[UnityEngine.Bindings.FreeFunction("HDROutputSettingsBindings::GetDisplayColorGamut", HasExplicitThis = false, ThrowsException = true)]
	private static extern ColorGamut GetDisplayColorGamut(int displayIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004CE")]
	[Address(RVA = "0x68D2F90", Offset = "0x68D1F90", VA = "0x68D2F90")]
	[UnityEngine.Bindings.FreeFunction("HDROutputSettingsBindings::GetGraphicsFormat", HasExplicitThis = false, ThrowsException = true)]
	private static extern GraphicsFormat GetGraphicsFormat(int displayIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004CF")]
	[Address(RVA = "0x68D3030", Offset = "0x68D2030", VA = "0x68D3030")]
	[UnityEngine.Bindings.FreeFunction("HDROutputSettingsBindings::GetPaperWhiteNits", HasExplicitThis = false, ThrowsException = true)]
	private static extern float GetPaperWhiteNits(int displayIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004D0")]
	[Address(RVA = "0x68D30D0", Offset = "0x68D20D0", VA = "0x68D30D0")]
	[UnityEngine.Bindings.FreeFunction("HDROutputSettingsBindings::GetMaxFullFrameToneMapLuminance", HasExplicitThis = false, ThrowsException = true)]
	private static extern int GetMaxFullFrameToneMapLuminance(int displayIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004D1")]
	[Address(RVA = "0x68D3170", Offset = "0x68D2170", VA = "0x68D3170")]
	[UnityEngine.Bindings.FreeFunction("HDROutputSettingsBindings::GetMaxToneMapLuminance", HasExplicitThis = false, ThrowsException = true)]
	private static extern int GetMaxToneMapLuminance(int displayIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004D2")]
	[Address(RVA = "0x68D3210", Offset = "0x68D2210", VA = "0x68D3210")]
	[UnityEngine.Bindings.FreeFunction("HDROutputSettingsBindings::GetMinToneMapLuminance", HasExplicitThis = false, ThrowsException = true)]
	private static extern int GetMinToneMapLuminance(int displayIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004D3")]
	[Address(RVA = "0x68D32B0", Offset = "0x68D22B0", VA = "0x68D32B0")]
	[UnityEngine.Bindings.FreeFunction("HDROutputSettingsBindings::GetHDRModeChangeRequested", HasExplicitThis = false, ThrowsException = true)]
	private static extern bool GetHDRModeChangeRequested(int displayIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004D4")]
	[Address(RVA = "0x68D3360", Offset = "0x68D2360", VA = "0x68D3360")]
	[UnityEngine.Bindings.FreeFunction("HDROutputSettingsBindings::RequestHDRModeChange", HasExplicitThis = false, ThrowsException = true)]
	private static extern void RequestHDRModeChangeInternal(int displayIndex, bool enabled);
}
