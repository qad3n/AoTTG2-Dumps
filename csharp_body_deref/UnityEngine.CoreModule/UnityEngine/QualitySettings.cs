using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x20000B8")]
[UnityEngine.Bindings.NativeHeader("Runtime/Misc/PlayerSettings.h")]
[UnityEngine.Bindings.StaticAccessor("GetQualitySettings()", UnityEngine.Bindings.StaticAccessorType.Dot)]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/QualitySettings.h")]
public sealed class QualitySettings : Object
{
	[Token(Token = "0x40001F5")]
	[FieldOffset(Offset = "0x0")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static Action<int, int> activeQualityLevelChanged;

	[Token(Token = "0x170000AD")]
	[UnityEngine.Bindings.NativeProperty("ShadowQuality")]
	public static extern ShadowQuality shadows
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000385")]
		[Address(RVA = "0x4A9CD70", Offset = "0x4A9CD70", VA = "0x4A9CD70")]
		set;
	}

	[Token(Token = "0x170000AE")]
	public static extern int shadowCascades
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000386")]
		[Address(RVA = "0x4A9CDA0", Offset = "0x4A9CDA0", VA = "0x4A9CDA0")]
		set;
	}

	[Token(Token = "0x170000AF")]
	public static extern float shadowDistance
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000387")]
		[Address(RVA = "0x4A9CDD0", Offset = "0x4A9CDD0", VA = "0x4A9CDD0")]
		set;
	}

	[Token(Token = "0x170000B0")]
	[UnityEngine.Bindings.NativeProperty("ShadowResolution")]
	public static extern ShadowResolution shadowResolution
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000388")]
		[Address(RVA = "0x4A9CE10", Offset = "0x4A9CE10", VA = "0x4A9CE10")]
		set;
	}

	[Token(Token = "0x170000B1")]
	[UnityEngine.Bindings.NativeProperty("AnisotropicTextures")]
	public static extern AnisotropicFiltering anisotropicFiltering
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000389")]
		[Address(RVA = "0x4A9CE40", Offset = "0x4A9CE40", VA = "0x4A9CE40")]
		set;
	}

	[Token(Token = "0x170000B2")]
	public static extern int globalTextureMipmapLimit
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600038A")]
		[Address(RVA = "0x4A9CE70", Offset = "0x4A9CE70", VA = "0x4A9CE70")]
		set;
	}

	[Token(Token = "0x170000B3")]
	public static extern int vSyncCount
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600038B")]
		[Address(RVA = "0x4A9CEA0", Offset = "0x4A9CEA0", VA = "0x4A9CEA0")]
		set;
	}

	[Token(Token = "0x170000B4")]
	public static extern int antiAliasing
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600038C")]
		[Address(RVA = "0x4A9CED0", Offset = "0x4A9CED0", VA = "0x4A9CED0")]
		set;
	}

	[Token(Token = "0x170000B5")]
	public static extern ColorSpace activeColorSpace
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600038D")]
		[Address(RVA = "0x4A9CF00", Offset = "0x4A9CF00", VA = "0x4A9CF00")]
		[UnityEngine.Bindings.NativeName("GetColorSpace")]
		[UnityEngine.Bindings.StaticAccessor("GetPlayerSettings()", UnityEngine.Bindings.StaticAccessorType.Dot)]
		get;
	}

	[Token(Token = "0x6000384")]
	[Address(RVA = "0x4A9CD10", Offset = "0x4A9CD10", VA = "0x4A9CD10")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void OnActiveQualityLevelChanged(int previousQualityLevel, int currentQualityLevel)
	{
	}
}
