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

[Token(Token = "0x20001B4")]
[UnityEngine.Bindings.NativeType(Header = "Runtime/2D/SpriteAtlas/SpriteAtlas.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/SpriteFrame.h")]
public class SpriteAtlas : Object
{
	[Token(Token = "0x6000CA9")]
	[Address(RVA = "0x4E0E060", Offset = "0x4E0E060", VA = "0x4E0E060")]
	public bool CanBindTo([UnityEngine.Bindings.NotNull("ArgumentNullException")] Sprite sprite)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000CAA")]
	[Address(RVA = "0x4E0E190", Offset = "0x4E0E190", VA = "0x4E0E190")]
	private static extern bool CanBindTo_Injected(IntPtr _unity_self, IntPtr sprite);
}
