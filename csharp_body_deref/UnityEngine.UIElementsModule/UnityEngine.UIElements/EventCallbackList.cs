// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.EventCallbackList
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Reflection;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000189")]
[DefaultMember("Item")]
internal class EventCallbackList
{
	[Token(Token = "0x4000673")]
	[FieldOffset(Offset = "0x0")]
	public static readonly EventCallbackList EmptyList;

	[Token(Token = "0x4000674")]
	[FieldOffset(Offset = "0x8")]
	private static readonly EventCallbackFunctorBase[] EmptyArray;

	[Token(Token = "0x4000675")]
	[FieldOffset(Offset = "0x10")]
	private EventCallbackFunctorBase[] m_Array;

	[Token(Token = "0x4000676")]
	[FieldOffset(Offset = "0x18")]
	private int m_Count;

	[Token(Token = "0x170001DF")]
	public int Count
	{
		[Token(Token = "0x6000A73")]
		[Address(RVA = "0x502D3A0", Offset = "0x502D3A0", VA = "0x502D3A0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001E0")]
	public Span<EventCallbackFunctorBase> Span
	{
		[Token(Token = "0x6000A74")]
		[Address(RVA = "0x502D3B0", Offset = "0x502D3B0", VA = "0x502D3B0")]
		get
		{
			return default(Span<EventCallbackFunctorBase>);
		}
	}

	[Token(Token = "0x6000A6C")]
	[Address(RVA = "0x502CEF0", Offset = "0x502CEF0", VA = "0x502CEF0")]
	public EventCallbackList()
	{
	}

	[Token(Token = "0x6000A6D")]
	[Address(RVA = "0x502CE70", Offset = "0x502CE70", VA = "0x502CE70")]
	public EventCallbackList(EventCallbackList source)
	{
	}

	[Token(Token = "0x6000A6E")]
	[Address(RVA = "0x502D100", Offset = "0x502D100", VA = "0x502D100")]
	public bool Contains(long eventTypeId, Delegate callback, CallbackPhase phase)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A6F")]
	[Address(RVA = "0x502D110", Offset = "0x502D110", VA = "0x502D110")]
	public EventCallbackFunctorBase Find(long eventTypeId, Delegate callback, CallbackPhase phase)
	{
		return null;
	}

	[Token(Token = "0x6000A70")]
	[Address(RVA = "0x502D1C0", Offset = "0x502D1C0", VA = "0x502D1C0")]
	public bool Remove(long eventTypeId, Delegate callback, CallbackPhase phase)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A71")]
	[Address(RVA = "0x502D2B0", Offset = "0x502D2B0", VA = "0x502D2B0")]
	public void Add(EventCallbackFunctorBase item)
	{
	}

	[Token(Token = "0x6000A72")]
	[Address(RVA = "0x502CF60", Offset = "0x502CF60", VA = "0x502CF60")]
	public void AddRange(EventCallbackList list)
	{
	}

	[Token(Token = "0x6000A75")]
	[Address(RVA = "0x502D060", Offset = "0x502D060", VA = "0x502D060")]
	public void Clear()
	{
	}
}
