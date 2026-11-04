// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.EventCallbackList
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Reflection;
using Il2CppDummyDll;
using JetBrains.Annotations;

namespace UnityEngine.UIElements;

[Token(Token = "0x20001CE")]
[DefaultMember("Item")]
internal class EventCallbackList
{
	[Token(Token = "0x40007A7")]
	[FieldOffset(Offset = "0x0")]
	public static readonly EventCallbackList EmptyList;

	[Token(Token = "0x40007A8")]
	[FieldOffset(Offset = "0x8")]
	private static readonly EventCallbackFunctorBase[] EmptyArray;

	[Token(Token = "0x40007A9")]
	[FieldOffset(Offset = "0x10")]
	private EventCallbackFunctorBase[] m_Array;

	[Token(Token = "0x40007AA")]
	[FieldOffset(Offset = "0x18")]
	private int m_Count;

	[Token(Token = "0x17000262")]
	public Span<EventCallbackFunctorBase> Span
	{
		[Token(Token = "0x6000C83")]
		[Address(RVA = "0x325C7C0", Offset = "0x325ADC0", VA = "0x18325C7C0")]
		get
		{
			return default(Span<EventCallbackFunctorBase>);
		}
	}

	[Token(Token = "0x6000C7D")]
	[Address(RVA = "0x325C6C0", Offset = "0x325ACC0", VA = "0x18325C6C0")]
	public EventCallbackList()
	{
	}

	[Token(Token = "0x6000C7E")]
	[Address(RVA = "0x325C730", Offset = "0x325AD30", VA = "0x18325C730")]
	public EventCallbackList(EventCallbackList source)
	{
	}

	[Token(Token = "0x6000C7F")]
	[Address(RVA = "0x325C410", Offset = "0x325AA10", VA = "0x18325C410")]
	public EventCallbackFunctorBase Find(long eventTypeId, [NotNull] Delegate callback)
	{
		return null;
	}

	[Token(Token = "0x6000C80")]
	[Address(RVA = "0x325C4B0", Offset = "0x325AAB0", VA = "0x18325C4B0")]
	public bool Remove(long eventTypeId, [NotNull] Delegate callback, out EventCallbackFunctorBase removedFunctor)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C81")]
	[Address(RVA = "0x325C310", Offset = "0x325A910", VA = "0x18325C310")]
	public void Add(EventCallbackFunctorBase item)
	{
	}

	[Token(Token = "0x6000C82")]
	[Address(RVA = "0x325C240", Offset = "0x325A840", VA = "0x18325C240")]
	public void AddRange(EventCallbackList list)
	{
	}

	[Token(Token = "0x6000C84")]
	[Address(RVA = "0x1B82930", Offset = "0x1B80F30", VA = "0x181B82930")]
	public void Clear()
	{
	}
}
