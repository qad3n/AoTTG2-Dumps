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
		[Address(RVA = "0x4D05A70", Offset = "0x4D05A70", VA = "0x4D05A70")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001E0")]
	public Span<EventCallbackFunctorBase> Span
	{
		[Token(Token = "0x6000A74")]
		[Address(RVA = "0x4D05A80", Offset = "0x4D05A80", VA = "0x4D05A80")]
		get
		{
			return default(Span<EventCallbackFunctorBase>);
		}
	}

	[Token(Token = "0x6000A6C")]
	[Address(RVA = "0x4D055C0", Offset = "0x4D055C0", VA = "0x4D055C0")]
	public EventCallbackList()
	{
	}

	[Token(Token = "0x6000A6D")]
	[Address(RVA = "0x4D05540", Offset = "0x4D05540", VA = "0x4D05540")]
	public EventCallbackList(EventCallbackList source)
	{
	}

	[Token(Token = "0x6000A6E")]
	[Address(RVA = "0x4D057D0", Offset = "0x4D057D0", VA = "0x4D057D0")]
	public bool Contains(long eventTypeId, Delegate callback, CallbackPhase phase)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A6F")]
	[Address(RVA = "0x4D057E0", Offset = "0x4D057E0", VA = "0x4D057E0")]
	public EventCallbackFunctorBase Find(long eventTypeId, Delegate callback, CallbackPhase phase)
	{
		return null;
	}

	[Token(Token = "0x6000A70")]
	[Address(RVA = "0x4D05890", Offset = "0x4D05890", VA = "0x4D05890")]
	public bool Remove(long eventTypeId, Delegate callback, CallbackPhase phase)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A71")]
	[Address(RVA = "0x4D05980", Offset = "0x4D05980", VA = "0x4D05980")]
	public void Add(EventCallbackFunctorBase item)
	{
	}

	[Token(Token = "0x6000A72")]
	[Address(RVA = "0x4D05630", Offset = "0x4D05630", VA = "0x4D05630")]
	public void AddRange(EventCallbackList list)
	{
	}

	[Token(Token = "0x6000A75")]
	[Address(RVA = "0x4D05730", Offset = "0x4D05730", VA = "0x4D05730")]
	public void Clear()
	{
	}
}
