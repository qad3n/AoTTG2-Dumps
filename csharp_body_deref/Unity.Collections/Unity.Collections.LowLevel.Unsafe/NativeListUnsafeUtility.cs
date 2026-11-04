// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.LowLevel.Unsafe.NativeListUnsafeUtility
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Unity.Collections.LowLevel.Unsafe;

[Token(Token = "0x20000FE")]
[GenerateTestsForBurstCompatibility]
public static class NativeListUnsafeUtility
{
	[Token(Token = "0x6000AE3")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public unsafe static T* GetUnsafePtr<T>(this NativeList<T> list) where T : struct
	{
		//IL_0002: Expected I, but got O
		return (T*)unchecked((nint)null);
	}

	[Token(Token = "0x6000AE4")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public unsafe static T* GetUnsafeReadOnlyPtr<T>(this NativeList<T> list) where T : struct
	{
		//IL_0002: Expected I, but got O
		return (T*)unchecked((nint)null);
	}

	[Token(Token = "0x6000AE5")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public unsafe static void* GetInternalListDataPtrUnchecked<T>(ref NativeList<T> list) where T : struct
	{
		//IL_0002: Expected I, but got O
		return (void*)unchecked((nint)null);
	}
}
