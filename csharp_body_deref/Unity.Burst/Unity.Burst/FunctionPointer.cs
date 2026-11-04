// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Burst.FunctionPointer
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using Il2CppDummyDll;
using Unity.Collections.LowLevel.Unsafe;

namespace Unity.Burst;

[Token(Token = "0x200002A")]
public readonly struct FunctionPointer<T> : IFunctionPointer
{
	[Token(Token = "0x400017A")]
	[FieldOffset(Offset = "0x0")]
	[NativeDisableUnsafePtrRestriction]
	private readonly IntPtr _ptr;

	[Token(Token = "0x17000018")]
	public IntPtr Value
	{
		[Token(Token = "0x60000DB")]
		get
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x17000019")]
	public T Invoke
	{
		[Token(Token = "0x60000DD")]
		get
		{
			return (T)null;
		}
	}

	[Token(Token = "0x1700001A")]
	public bool IsCreated
	{
		[Token(Token = "0x60000DE")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60000DA")]
	public FunctionPointer(IntPtr ptr)
	{
	}

	[Token(Token = "0x60000DC")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	private void CheckIsCreated()
	{
	}

	[Token(Token = "0x60000DF")]
	private IFunctionPointer Unity_002EBurst_002EIFunctionPointer_002EFromIntPtr(IntPtr ptr)
	{
		return null;
	}
}
