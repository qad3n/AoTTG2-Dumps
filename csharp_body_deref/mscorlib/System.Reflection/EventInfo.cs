// ==================== AoTTG2 cross-reference ====================
// Type: System.Reflection.EventInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Mono;

namespace System.Reflection;

[Serializable]
[Token(Token = "0x20004E0")]
public abstract class EventInfo : MemberInfo
{
	[Token(Token = "0x20004E1")]
	private delegate void AddEventAdapter(object _this, Delegate dele);

	[Token(Token = "0x400133F")]
	[FieldOffset(Offset = "0x10")]
	private AddEventAdapter cached_add_event;

	[Token(Token = "0x170004A4")]
	public override MemberTypes MemberType
	{
		[Token(Token = "0x6002444")]
		[Address(RVA = "0x53D7C90", Offset = "0x53D6C90", VA = "0x53D7C90", Slot = "7")]
		get
		{
			return default(MemberTypes);
		}
	}

	[Token(Token = "0x170004A5")]
	public virtual Type EventHandlerType
	{
		[Token(Token = "0x600244A")]
		[Address(RVA = "0x53D7CE0", Offset = "0x53D6CE0", VA = "0x53D7CE0", Slot = "21")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002443")]
	[Address(RVA = "0x53D7C70", Offset = "0x53D6C70", VA = "0x53D7C70")]
	protected EventInfo()
	{
	}

	[Token(Token = "0x6002445")]
	[Address(RVA = "0x53D7CA0", Offset = "0x53D6CA0", VA = "0x53D7CA0", Slot = "16")]
	public MethodInfo GetAddMethod()
	{
		return null;
	}

	[Token(Token = "0x6002446")]
	[Address(RVA = "0x53D7CC0", Offset = "0x53D6CC0", VA = "0x53D7CC0", Slot = "17")]
	public MethodInfo GetRemoveMethod()
	{
		return null;
	}

	[Token(Token = "0x6002447")]
	public abstract MethodInfo GetAddMethod(bool nonPublic);

	[Token(Token = "0x6002448")]
	public abstract MethodInfo GetRemoveMethod(bool nonPublic);

	[Token(Token = "0x6002449")]
	public abstract MethodInfo GetRaiseMethod(bool nonPublic);

	[Token(Token = "0x600244B")]
	[Address(RVA = "0x53D7DF0", Offset = "0x53D6DF0", VA = "0x53D7DF0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600244C")]
	[Address(RVA = "0x53D7E10", Offset = "0x53D6E10", VA = "0x53D7E10", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600244D")]
	[Address(RVA = "0x53D7E30", Offset = "0x53D6E30", VA = "0x53D7E30")]
	public static bool operator ==(EventInfo left, EventInfo right)
	{
		return default(bool);
	}

	[Token(Token = "0x600244E")]
	[Address(RVA = "0x53D7E60", Offset = "0x53D6E60", VA = "0x53D7E60")]
	public static bool operator !=(EventInfo left, EventInfo right)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600244F")]
	[Address(RVA = "0x53D7E90", Offset = "0x53D6E90", VA = "0x53D7E90")]
	private static extern EventInfo internal_from_handle_type(IntPtr event_handle, IntPtr type_handle);

	[Token(Token = "0x6002450")]
	[Address(RVA = "0x53D7EA0", Offset = "0x53D6EA0", VA = "0x53D7EA0")]
	internal static EventInfo GetEventFromHandle(Mono.RuntimeEventHandle handle, RuntimeTypeHandle reflectedType)
	{
		return null;
	}
}
