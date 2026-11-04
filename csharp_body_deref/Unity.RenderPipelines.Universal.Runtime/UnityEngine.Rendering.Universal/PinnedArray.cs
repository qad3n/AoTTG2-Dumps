// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.PinnedArray
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Unity.Collections;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x20000F0")]
internal struct PinnedArray<T> : IDisposable where T : struct
{
	[Token(Token = "0x4000577")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public T[] managedArray;

	[Token(Token = "0x4000578")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public GCHandle handle;

	[Token(Token = "0x4000579")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public NativeArray<T> nativeArray;

	[Token(Token = "0x170001C7")]
	public int length
	{
		[Token(Token = "0x6000687")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000688")]
	public PinnedArray(int length)
	{
	}

	[Token(Token = "0x6000689")]
	public void Dispose()
	{
	}
}
