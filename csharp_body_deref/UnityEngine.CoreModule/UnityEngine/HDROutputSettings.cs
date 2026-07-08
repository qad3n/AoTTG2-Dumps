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
		[Address(RVA = "0x4A9C550", Offset = "0x4A9C550", VA = "0x4A9C550")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A5")]
	public bool active
	{
		[Token(Token = "0x600036F")]
		[Address(RVA = "0x4A9C5C0", Offset = "0x4A9C5C0", VA = "0x4A9C5C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000A6")]
	public ColorGamut displayColorGamut
	{
		[Token(Token = "0x6000370")]
		[Address(RVA = "0x4A9C660", Offset = "0x4A9C660", VA = "0x4A9C660")]
		get
		{
			return default(ColorGamut);
		}
	}

	[Token(Token = "0x170000A7")]
	public float paperWhiteNits
	{
		[Token(Token = "0x6000371")]
		[Address(RVA = "0x4A9C700", Offset = "0x4A9C700", VA = "0x4A9C700")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000A8")]
	public int maxFullFrameToneMapLuminance
	{
		[Token(Token = "0x6000372")]
		[Address(RVA = "0x4A9C7A0", Offset = "0x4A9C7A0", VA = "0x4A9C7A0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000A9")]
	public int maxToneMapLuminance
	{
		[Token(Token = "0x6000373")]
		[Address(RVA = "0x4A9C840", Offset = "0x4A9C840", VA = "0x4A9C840")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000AA")]
	public int minToneMapLuminance
	{
		[Token(Token = "0x6000374")]
		[Address(RVA = "0x4A9C8E0", Offset = "0x4A9C8E0", VA = "0x4A9C8E0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600036C")]
	[Address(RVA = "0x4A9C510", Offset = "0x4A9C510", VA = "0x4A9C510")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.XRModule" })]
	internal HDROutputSettings()
	{
	}

	[Token(Token = "0x600036D")]
	[Address(RVA = "0x4A9C530", Offset = "0x4A9C530", VA = "0x4A9C530")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.XRModule" })]
	internal HDROutputSettings(int displayIndex)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000375")]
	[Address(RVA = "0x4A9C630", Offset = "0x4A9C630", VA = "0x4A9C630")]
	[UnityEngine.Bindings.FreeFunction("HDROutputSettingsBindings::GetActive", HasExplicitThis = false, ThrowsException = true)]
	private static extern bool GetActive(int displayIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000376")]
	[Address(RVA = "0x4A9C6D0", Offset = "0x4A9C6D0", VA = "0x4A9C6D0")]
	[UnityEngine.Bindings.FreeFunction("HDROutputSettingsBindings::GetDisplayColorGamut", HasExplicitThis = false, ThrowsException = true)]
	private static extern ColorGamut GetDisplayColorGamut(int displayIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000377")]
	[Address(RVA = "0x4A9C770", Offset = "0x4A9C770", VA = "0x4A9C770")]
	[UnityEngine.Bindings.FreeFunction("HDROutputSettingsBindings::GetPaperWhiteNits", HasExplicitThis = false, ThrowsException = true)]
	private static extern float GetPaperWhiteNits(int displayIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000378")]
	[Address(RVA = "0x4A9C810", Offset = "0x4A9C810", VA = "0x4A9C810")]
	[UnityEngine.Bindings.FreeFunction("HDROutputSettingsBindings::GetMaxFullFrameToneMapLuminance", HasExplicitThis = false, ThrowsException = true)]
	private static extern int GetMaxFullFrameToneMapLuminance(int displayIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000379")]
	[Address(RVA = "0x4A9C8B0", Offset = "0x4A9C8B0", VA = "0x4A9C8B0")]
	[UnityEngine.Bindings.FreeFunction("HDROutputSettingsBindings::GetMaxToneMapLuminance", HasExplicitThis = false, ThrowsException = true)]
	private static extern int GetMaxToneMapLuminance(int displayIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600037A")]
	[Address(RVA = "0x4A9C950", Offset = "0x4A9C950", VA = "0x4A9C950")]
	[UnityEngine.Bindings.FreeFunction("HDROutputSettingsBindings::GetMinToneMapLuminance", HasExplicitThis = false, ThrowsException = true)]
	private static extern int GetMinToneMapLuminance(int displayIndex);
}
