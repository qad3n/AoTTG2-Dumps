// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.GCHandlePool
// Update status: NEW in this game update
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
		[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60028E3")]
		[Address(RVA = "0x138BAA0", Offset = "0x138A0A0", VA = "0x18138BAA0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60028DE")]
	[Address(RVA = "0x315D1B0", Offset = "0x315B7B0", VA = "0x18315D1B0")]
	public GCHandlePool(int capacity = 256, int allocBatchSize = 64)
	{
	}

	[Token(Token = "0x60028DF")]
	[Address(RVA = "0x315CEF0", Offset = "0x315B4F0", VA = "0x18315CEF0")]
	public GCHandle Get(object target)
	{
		return default(GCHandle);
	}

	[Token(Token = "0x60028E0")]
	[Address(RVA = "0x315CEC0", Offset = "0x315B4C0", VA = "0x18315CEC0")]
	public IntPtr GetIntPtr(object target)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60028E1")]
	[Address(RVA = "0x315D080", Offset = "0x315B680", VA = "0x18315D080")]
	public void ReturnAll()
	{
	}

	[Token(Token = "0x60028E4")]
	[Address(RVA = "0x315CD00", Offset = "0x315B300", VA = "0x18315CD00", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60028E5")]
	[Address(RVA = "0x315CD60", Offset = "0x315B360", VA = "0x18315CD60")]
	private void Dispose(bool disposing)
	{
	}
}
