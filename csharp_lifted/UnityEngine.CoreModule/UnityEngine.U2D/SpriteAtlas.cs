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
[UnityEngine.Bindings.NativeType(Header = "Runtime/2D/SpriteAtlas/SpriteAtlas.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/SpriteFrame.h")]
public class SpriteAtlas : Object
{
	[Token(Token = "0x600182C")]
	[Address(RVA = "0x696E9F0", Offset = "0x696D9F0", VA = "0x696E9F0")]
	public bool CanBindTo([UnityEngine.Bindings.NotNull] Sprite sprite)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600182D")]
	[Address(RVA = "0x696EAE0", Offset = "0x696DAE0", VA = "0x696EAE0")]
	private static extern bool CanBindTo_Injected(IntPtr _unity_self, IntPtr sprite);
}
