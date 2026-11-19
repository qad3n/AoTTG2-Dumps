// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.GCHandlePool
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x200056D")]
internal class GCHandlePool : IDisposable
{
	[Token(Token = "0x4001269")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private List<GCHandle> m_Handles;

	[Token(Token = "0x400126A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private int m_UsedHandlesCount;

	[Token(Token = "0x400126B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	private readonly int k_AllocBatchSize;

	[Token(Token = "0x17000A4A")]
	internal bool disposed
	{
		[Token(Token = "0x60028E2")]
		[Address(RVA = "0x6B78900", Offset = "0x6B77900", VA = "0x6B78900")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60028E3")]
		[Address(RVA = "0x6B78910", Offset = "0x6B77910", VA = "0x6B78910")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60028DE")]
	[Address(RVA = "0x6B78600", Offset = "0x6B77600", VA = "0x6B78600")]
	public GCHandlePool(int capacity = 256, int allocBatchSize = 64)
	{
	}

	[Token(Token = "0x60028DF")]
	[Address(RVA = "0x6B78690", Offset = "0x6B77690", VA = "0x6B78690")]
	public GCHandle Get(object target)
	{
		return default(GCHandle);
	}

	[Token(Token = "0x60028E0")]
	[Address(RVA = "0x6B78810", Offset = "0x6B77810", VA = "0x6B78810")]
	public IntPtr GetIntPtr(object target)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60028E1")]
	[Address(RVA = "0x6B78830", Offset = "0x6B77830", VA = "0x6B78830")]
	public void ReturnAll()
	{
	}

	[Token(Token = "0x60028E4")]
	[Address(RVA = "0x6B78920", Offset = "0x6B77920", VA = "0x6B78920", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60028E5")]
	[Address(RVA = "0x6B78980", Offset = "0x6B77980", VA = "0x6B78980")]
	private void Dispose(bool disposing)
	{
	}
}
