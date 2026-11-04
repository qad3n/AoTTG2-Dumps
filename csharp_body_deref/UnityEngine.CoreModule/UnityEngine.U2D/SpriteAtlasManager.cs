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
[UnityEngine.Bindings.NativeHeader("Runtime/2D/SpriteAtlas/SpriteAtlasManager.h")]
[UnityEngine.Bindings.StaticAccessor("GetSpriteAtlasManager()", UnityEngine.Bindings.StaticAccessorType.Dot)]
[UnityEngine.Bindings.NativeHeader("Runtime/2D/SpriteAtlas/SpriteAtlas.h")]
public class SpriteAtlasManager
{
	[Token(Token = "0x4000E0F")]
	[FieldOffset(Offset = "0x0")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static Action<string, Action<SpriteAtlas>> atlasRequested;

	[Token(Token = "0x4000E10")]
	[FieldOffset(Offset = "0x8")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static Action<SpriteAtlas> m_atlasRegistered;

	[Token(Token = "0x14000011")]
	public static event Action<SpriteAtlas> atlasRegistered
	{
		[Token(Token = "0x6001813")]
		[Address(RVA = "0x2F79D70", Offset = "0x2F78370", VA = "0x182F79D70")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6001814")]
		[Address(RVA = "0x2F79E40", Offset = "0x2F78440", VA = "0x182F79E40")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6001812")]
	[Address(RVA = "0x2F79CC0", Offset = "0x2F782C0", VA = "0x182F79CC0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static bool RequestAtlas(string tag)
	{
		return default(bool);
	}

	[Token(Token = "0x6001815")]
	[Address(RVA = "0x2F79BB0", Offset = "0x2F781B0", VA = "0x182F79BB0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void PostRegisteredAtlas(SpriteAtlas spriteAtlas)
	{
	}

	[Token(Token = "0x6001816")]
	[Address(RVA = "0x2F79C50", Offset = "0x2F78250", VA = "0x182F79C50")]
	internal static void Register(SpriteAtlas spriteAtlas)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001817")]
	[Address(RVA = "0x2F79C10", Offset = "0x2F78210", VA = "0x182F79C10")]
	private static extern void Register_Injected(IntPtr spriteAtlas);
}
