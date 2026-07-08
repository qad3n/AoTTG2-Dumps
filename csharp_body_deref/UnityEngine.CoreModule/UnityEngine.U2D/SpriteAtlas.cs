using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.U2D;

[Token(Token = "0x20001B1")]
[UnityEngine.Bindings.NativeType(Header = "Runtime/2D/SpriteAtlas/SpriteAtlas.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/SpriteFrame.h")]
public class SpriteAtlas : Object
{
	[Token(Token = "0x6000CA7")]
	[Address(RVA = "0x4AE6730", Offset = "0x4AE6730", VA = "0x4AE6730")]
	public bool CanBindTo([UnityEngine.Bindings.NotNull("ArgumentNullException")] Sprite sprite)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000CA8")]
	[Address(RVA = "0x4AE6860", Offset = "0x4AE6860", VA = "0x4AE6860")]
	private static extern bool CanBindTo_Injected(IntPtr _unity_self, IntPtr sprite);
}
