// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ContextContainer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x200002E")]
public class ContextContainer : IDisposable
{
	[Token(Token = "0x200002F")]
	private static class TypeId<T>
	{
		[Token(Token = "0x40000C0")]
		[FieldOffset(Offset = "0x0")]
		public static uint value;
	}

	[Token(Token = "0x2000030")]
	private struct Item
	{
		[Token(Token = "0x40000C1")]
		[FieldOffset(Offset = "0x0")]
		public ContextItem storage;

		[Token(Token = "0x40000C2")]
		[FieldOffset(Offset = "0x8")]
		public bool isSet;
	}

	[Token(Token = "0x40000BD")]
	[FieldOffset(Offset = "0x10")]
	private Item[] m_Items;

	[Token(Token = "0x40000BE")]
	[FieldOffset(Offset = "0x18")]
	private List<uint> m_ActiveItemIndices;

	[Token(Token = "0x40000BF")]
	[FieldOffset(Offset = "0x0")]
	private static uint s_TypeCount;

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600047A")]
	public T Get<T>() where T : ContextItem, new()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600047B")]
	public T Create<T>() where T : ContextItem, new()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600047C")]
	public T GetOrCreate<T>() where T : ContextItem, new()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600047D")]
	public bool Contains<T>() where T : ContextItem, new()
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600047E")]
	[Address(RVA = "0x64BB240", Offset = "0x64BA240", VA = "0x64BB240")]
	private bool Contains(uint typeId)
	{
		return default(bool);
	}

	[Token(Token = "0x600047F")]
	private T CreateAndGetData<T>(uint typeId) where T : ContextItem, new()
	{
		return null;
	}

	[Token(Token = "0x6000480")]
	[Address(RVA = "0x64BB280", Offset = "0x64BA280", VA = "0x64BB280", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000481")]
	[Address(RVA = "0x64BB430", Offset = "0x64BA430", VA = "0x64BB430")]
	public ContextContainer()
	{
	}
}
