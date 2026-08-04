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
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x20000B3")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/GfxDevice/HDROutputSettings.h")]
public class HDROutputSettings
{
	[Token(Token = "0x40001DA")]
	[FieldOffset(Offset = "0x10")]
	private int m_DisplayIndex;

	[Token(Token = "0x40001DB")]
	[FieldOffset(Offset = "0x0")]
	public static HDROutputSettings[] displays;

	[Token(Token = "0x40001DC")]
	[FieldOffset(Offset = "0x8")]
	private static HDROutputSettings _mainDisplay;

	[Token(Token = "0x170000A4")]
	public static HDROutputSettings main
	{
		[Token(Token = "0x600036E")]
		[Address(RVA = "0x4DC3D70", Offset = "0x4DC3D70", VA = "0x4DC3D70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A5")]
	public bool active
	{
		[Token(Token = "0x600036F")]
		[Address(RVA = "0x4DC3DE0", Offset = "0x4DC3DE0", VA = "0x4DC3DE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000A6")]
	public ColorGamut displayColorGamut
	{
		[Token(Token = "0x6000370")]
		[Address(RVA = "0x4DC3E80", Offset = "0x4DC3E80", VA = "0x4DC3E80")]
		get
		{
			return default(ColorGamut);
		}
	}

	[Token(Token = "0x170000A7")]
	public float paperWhiteNits
	{
		[Token(Token = "0x6000371")]
		[Address(RVA = "0x4DC3F20", Offset = "0x4DC3F20", VA = "0x4DC3F20")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000A8")]
	public int maxFullFrameToneMapLuminance
	{
		[Token(Token = "0x6000372")]
		[Address(RVA = "0x4DC3FC0", Offset = "0x4DC3FC0", VA = "0x4DC3FC0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000A9")]
	public int maxToneMapLuminance
	{
		[Token(Token = "0x6000373")]
		[Address(RVA = "0x4DC4060", Offset = "0x4DC4060", VA = "0x4DC4060")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000AA")]
	public int minToneMapLuminance
	{
		[Token(Token = "0x6000374")]
		[Address(RVA = "0x4DC4100", Offset = "0x4DC4100", VA = "0x4DC4100")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600036C")]
	[Address(RVA = "0x4DC3D30", Offset = "0x4DC3D30", VA = "0x4DC3D30")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.XRModule" })]
	internal HDROutputSettings()
	{
	}

	[Token(Token = "0x600036D")]
	[Address(RVA = "0x4DC3D50", Offset = "0x4DC3D50", VA = "0x4DC3D50")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.XRModule" })]
	internal HDROutputSettings(int displayIndex)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000375")]
	[Address(RVA = "0x4DC3E50", Offset = "0x4DC3E50", VA = "0x4DC3E50")]
	[UnityEngine.Bindings.FreeFunction("HDROutputSettingsBindings::GetActive", HasExplicitThis = false, ThrowsException = true)]
	private static extern bool GetActive(int displayIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000376")]
	[Address(RVA = "0x4DC3EF0", Offset = "0x4DC3EF0", VA = "0x4DC3EF0")]
	[UnityEngine.Bindings.FreeFunction("HDROutputSettingsBindings::GetDisplayColorGamut", HasExplicitThis = false, ThrowsException = true)]
	private static extern ColorGamut GetDisplayColorGamut(int displayIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000377")]
	[Address(RVA = "0x4DC3F90", Offset = "0x4DC3F90", VA = "0x4DC3F90")]
	[UnityEngine.Bindings.FreeFunction("HDROutputSettingsBindings::GetPaperWhiteNits", HasExplicitThis = false, ThrowsException = true)]
	private static extern float GetPaperWhiteNits(int displayIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000378")]
	[Address(RVA = "0x4DC4030", Offset = "0x4DC4030", VA = "0x4DC4030")]
	[UnityEngine.Bindings.FreeFunction("HDROutputSettingsBindings::GetMaxFullFrameToneMapLuminance", HasExplicitThis = false, ThrowsException = true)]
	private static extern int GetMaxFullFrameToneMapLuminance(int displayIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000379")]
	[Address(RVA = "0x4DC40D0", Offset = "0x4DC40D0", VA = "0x4DC40D0")]
	[UnityEngine.Bindings.FreeFunction("HDROutputSettingsBindings::GetMaxToneMapLuminance", HasExplicitThis = false, ThrowsException = true)]
	private static extern int GetMaxToneMapLuminance(int displayIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600037A")]
	[Address(RVA = "0x4DC4170", Offset = "0x4DC4170", VA = "0x4DC4170")]
	[UnityEngine.Bindings.FreeFunction("HDROutputSettingsBindings::GetMinToneMapLuminance", HasExplicitThis = false, ThrowsException = true)]
	private static extern int GetMinToneMapLuminance(int displayIndex);
}
