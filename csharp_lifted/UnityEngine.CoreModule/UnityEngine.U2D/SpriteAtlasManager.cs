// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.U2D.SpriteAtlasManager
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.U2D;

[Token(Token = "0x2000402")]
[UnityEngine.Bindings.NativeHeader("Runtime/2D/SpriteAtlas/SpriteAtlas.h")]
[UnityEngine.Bindings.StaticAccessor("GetSpriteAtlasManager()", UnityEngine.Bindings.StaticAccessorType.Dot)]
[UnityEngine.Bindings.NativeHeader("Runtime/2D/SpriteAtlas/SpriteAtlasManager.h")]
public class SpriteAtlasManager
{
	[Token(Token = "0x4000E0D")]
	[FieldOffset(Offset = "0x0")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static Action<string, Action<SpriteAtlas>> atlasRequested;

	[Token(Token = "0x4000E0E")]
	[FieldOffset(Offset = "0x8")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static Action<SpriteAtlas> m_atlasRegistered;

	[Token(Token = "0x14000011")]
	public static event Action<SpriteAtlas> atlasRegistered
	{
		[Token(Token = "0x6001827")]
		[Address(RVA = "0x696E740", Offset = "0x696D740", VA = "0x696E740")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6001828")]
		[Address(RVA = "0x696E810", Offset = "0x696D810", VA = "0x696E810")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6001826")]
	[Address(RVA = "0x696E6A0", Offset = "0x696D6A0", VA = "0x696E6A0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static bool RequestAtlas(string tag)
	{
		return default(bool);
	}

	[Token(Token = "0x6001829")]
	[Address(RVA = "0x696E8E0", Offset = "0x696D8E0", VA = "0x696E8E0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void PostRegisteredAtlas(SpriteAtlas spriteAtlas)
	{
	}

	[Token(Token = "0x600182A")]
	[Address(RVA = "0x696E930", Offset = "0x696D930", VA = "0x696E930")]
	internal static void Register(SpriteAtlas spriteAtlas)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600182B")]
	[Address(RVA = "0x696E9C0", Offset = "0x696D9C0", VA = "0x696E9C0")]
	private static extern void Register_Injected(IntPtr spriteAtlas);
}
