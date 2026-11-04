// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.U2D.SpriteAtlas
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.U2D;

[Token(Token = "0x2000403")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/SpriteFrame.h")]
[UnityEngine.Bindings.NativeType(Header = "Runtime/2D/SpriteAtlas/SpriteAtlas.h")]
public class SpriteAtlas : Object
{
	[Token(Token = "0x6001818")]
	[Address(RVA = "0x2F79F60", Offset = "0x2F78560", VA = "0x182F79F60")]
	public bool CanBindTo([UnityEngine.Bindings.NotNull] Sprite sprite)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001819")]
	[Address(RVA = "0x2F79F10", Offset = "0x2F78510", VA = "0x182F79F10")]
	private static extern bool CanBindTo_Injected(IntPtr _unity_self, IntPtr sprite);
}
