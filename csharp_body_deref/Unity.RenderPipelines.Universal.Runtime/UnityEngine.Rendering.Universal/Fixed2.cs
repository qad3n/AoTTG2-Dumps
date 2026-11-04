// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.Fixed2
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x20000EF")]
internal struct Fixed2<T> where T : struct
{
	[Token(Token = "0x4000575")]
	[FieldOffset(Offset = "0x0")]
	public T item1;

	[Token(Token = "0x4000576")]
	[FieldOffset(Offset = "0x0")]
	public T item2;

	[Token(Token = "0x170001C6")]
	public T this[int index]
	{
		[Token(Token = "0x6000684")]
		get
		{
			return (T)null;
		}
		[Token(Token = "0x6000685")]
		set
		{
		}
	}

	[Token(Token = "0x6000682")]
	public Fixed2(T item1)
	{
	}

	[Token(Token = "0x6000683")]
	public Fixed2(T item1, T item2)
	{
	}

	[Token(Token = "0x6000686")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	private static void CheckRange(int index)
	{
	}
}
