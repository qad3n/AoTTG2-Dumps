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

[Token(Token = "0x20001B3")]
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
		[Token(Token = "0x6000CA4")]
		[Address(RVA = "0x4E0DD70", Offset = "0x4E0DD70", VA = "0x4E0DD70")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000CA5")]
		[Address(RVA = "0x4E0DE50", Offset = "0x4E0DE50", VA = "0x4E0DE50")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000CA3")]
	[Address(RVA = "0x4E0DCD0", Offset = "0x4E0DCD0", VA = "0x4E0DCD0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static bool RequestAtlas(string tag)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CA6")]
	[Address(RVA = "0x4E0DF30", Offset = "0x4E0DF30", VA = "0x4E0DF30")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void PostRegisteredAtlas(SpriteAtlas spriteAtlas)
	{
	}

	[Token(Token = "0x6000CA7")]
	[Address(RVA = "0x4E0DF80", Offset = "0x4E0DF80", VA = "0x4E0DF80")]
	internal static void Register(SpriteAtlas spriteAtlas)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000CA8")]
	[Address(RVA = "0x4E0E030", Offset = "0x4E0E030", VA = "0x4E0E030")]
	private static extern void Register_Injected(IntPtr spriteAtlas);
}
