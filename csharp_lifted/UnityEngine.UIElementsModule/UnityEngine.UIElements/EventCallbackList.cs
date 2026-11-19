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
		[Address(RVA = "0x6C61800", Offset = "0x6C60800", VA = "0x6C61800")]
		get
		{
			return default(Span<EventCallbackFunctorBase>);
		}
	}

	[Token(Token = "0x6000C7D")]
	[Address(RVA = "0x6C61320", Offset = "0x6C60320", VA = "0x6C61320")]
	public EventCallbackList()
	{
	}

	[Token(Token = "0x6000C7E")]
	[Address(RVA = "0x6C612A0", Offset = "0x6C602A0", VA = "0x6C612A0")]
	public EventCallbackList(EventCallbackList source)
	{
	}

	[Token(Token = "0x6000C7F")]
	[Address(RVA = "0x6C61550", Offset = "0x6C60550", VA = "0x6C61550")]
	public EventCallbackFunctorBase Find(long eventTypeId, [NotNull] Delegate callback)
	{
		return null;
	}

	[Token(Token = "0x6000C80")]
	[Address(RVA = "0x6C615E0", Offset = "0x6C605E0", VA = "0x6C615E0")]
	public bool Remove(long eventTypeId, [NotNull] Delegate callback, out EventCallbackFunctorBase removedFunctor)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C81")]
	[Address(RVA = "0x6C61700", Offset = "0x6C60700", VA = "0x6C61700")]
	public void Add(EventCallbackFunctorBase item)
	{
	}

	[Token(Token = "0x6000C82")]
	[Address(RVA = "0x6C61390", Offset = "0x6C60390", VA = "0x6C61390")]
	public void AddRange(EventCallbackList list)
	{
	}

	[Token(Token = "0x6000C84")]
	[Address(RVA = "0x6C614B0", Offset = "0x6C604B0", VA = "0x6C614B0")]
	public void Clear()
	{
	}
}
