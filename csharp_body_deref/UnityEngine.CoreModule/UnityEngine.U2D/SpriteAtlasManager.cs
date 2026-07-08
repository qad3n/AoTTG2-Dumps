using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.U2D;

[Token(Token = "0x20001B0")]
[UnityEngine.Bindings.StaticAccessor("GetSpriteAtlasManager()", UnityEngine.Bindings.StaticAccessorType.Dot)]
[UnityEngine.Bindings.NativeHeader("Runtime/2D/SpriteAtlas/SpriteAtlasManager.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/2D/SpriteAtlas/SpriteAtlas.h")]
public class SpriteAtlasManager
{
	[Token(Token = "0x4000628")]
	[FieldOffset(Offset = "0x0")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static Action<string, Action<SpriteAtlas>> atlasRequested;

	[Token(Token = "0x14000004")]
	public static event Action<SpriteAtlas> atlasRegistered
	{
		[Token(Token = "0x6000CA2")]
		[Address(RVA = "0x4AE6440", Offset = "0x4AE6440", VA = "0x4AE6440")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000CA3")]
		[Address(RVA = "0x4AE6520", Offset = "0x4AE6520", VA = "0x4AE6520")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000CA1")]
	[Address(RVA = "0x4AE63A0", Offset = "0x4AE63A0", VA = "0x4AE63A0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static bool RequestAtlas(string tag)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CA4")]
	[Address(RVA = "0x4AE6600", Offset = "0x4AE6600", VA = "0x4AE6600")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void PostRegisteredAtlas(SpriteAtlas spriteAtlas)
	{
	}

	[Token(Token = "0x6000CA5")]
	[Address(RVA = "0x4AE6650", Offset = "0x4AE6650", VA = "0x4AE6650")]
	internal static void Register(SpriteAtlas spriteAtlas)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000CA6")]
	[Address(RVA = "0x4AE6700", Offset = "0x4AE6700", VA = "0x4AE6700")]
	private static extern void Register_Injected(IntPtr spriteAtlas);
}
