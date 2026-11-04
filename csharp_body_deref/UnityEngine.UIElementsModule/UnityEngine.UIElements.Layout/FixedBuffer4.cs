// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Layout.FixedBuffer4
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.Layout;

[Serializable]
[Token(Token = "0x200060C")]
internal struct FixedBuffer4<T> where T : struct
{
	[Token(Token = "0x400168E")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private T __0;

	[Token(Token = "0x400168F")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private T __1;

	[Token(Token = "0x4001690")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private T __2;

	[Token(Token = "0x4001691")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private T __3;

	[Token(Token = "0x4001692")]
	public const int Length = 4;

	[Token(Token = "0x17000B07")]
	public unsafe ref T this[int index]
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6002C9B")]
		get
		{
			return ref *(T*)null;
		}
	}
}
