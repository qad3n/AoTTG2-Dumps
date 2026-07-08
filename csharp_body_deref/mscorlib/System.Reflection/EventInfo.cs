using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Mono;

namespace System.Reflection;

[Serializable]
[Token(Token = "0x20004D7")]
public abstract class EventInfo : MemberInfo
{
	[Token(Token = "0x20004D8")]
	private delegate void AddEventAdapter(object _this, Delegate dele);

	[Token(Token = "0x40013DF")]
	[FieldOffset(Offset = "0x10")]
	private AddEventAdapter cached_add_event;

	[Token(Token = "0x170004A2")]
	public override MemberTypes MemberType
	{
		[Token(Token = "0x60023F4")]
		[Address(RVA = "0x4EEAF10", Offset = "0x4EEAF10", VA = "0x4EEAF10", Slot = "7")]
		get
		{
			return default(MemberTypes);
		}
	}

	[Token(Token = "0x170004A3")]
	public virtual Type EventHandlerType
	{
		[Token(Token = "0x60023FA")]
		[Address(RVA = "0x4EEAF60", Offset = "0x4EEAF60", VA = "0x4EEAF60", Slot = "21")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60023F3")]
	[Address(RVA = "0x4EEAEF0", Offset = "0x4EEAEF0", VA = "0x4EEAEF0")]
	protected EventInfo()
	{
	}

	[Token(Token = "0x60023F5")]
	[Address(RVA = "0x4EEAF20", Offset = "0x4EEAF20", VA = "0x4EEAF20", Slot = "16")]
	public MethodInfo GetAddMethod()
	{
		return null;
	}

	[Token(Token = "0x60023F6")]
	[Address(RVA = "0x4EEAF40", Offset = "0x4EEAF40", VA = "0x4EEAF40", Slot = "17")]
	public MethodInfo GetRemoveMethod()
	{
		return null;
	}

	[Token(Token = "0x60023F7")]
	public abstract MethodInfo GetAddMethod(bool nonPublic);

	[Token(Token = "0x60023F8")]
	public abstract MethodInfo GetRemoveMethod(bool nonPublic);

	[Token(Token = "0x60023F9")]
	public abstract MethodInfo GetRaiseMethod(bool nonPublic);

	[Token(Token = "0x60023FB")]
	[Address(RVA = "0x4EEB070", Offset = "0x4EEB070", VA = "0x4EEB070", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60023FC")]
	[Address(RVA = "0x4EEB090", Offset = "0x4EEB090", VA = "0x4EEB090", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60023FD")]
	[Address(RVA = "0x4EEB0B0", Offset = "0x4EEB0B0", VA = "0x4EEB0B0")]
	public static bool operator ==(EventInfo left, EventInfo right)
	{
		return default(bool);
	}

	[Token(Token = "0x60023FE")]
	[Address(RVA = "0x4EEB0E0", Offset = "0x4EEB0E0", VA = "0x4EEB0E0")]
	public static bool operator !=(EventInfo left, EventInfo right)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60023FF")]
	[Address(RVA = "0x4EEB110", Offset = "0x4EEB110", VA = "0x4EEB110")]
	private static extern EventInfo internal_from_handle_type(IntPtr event_handle, IntPtr type_handle);

	[Token(Token = "0x6002400")]
	[Address(RVA = "0x4EEB120", Offset = "0x4EEB120", VA = "0x4EEB120")]
	internal static EventInfo GetEventFromHandle(Mono.RuntimeEventHandle handle, RuntimeTypeHandle reflectedType)
	{
		return null;
	}
}
