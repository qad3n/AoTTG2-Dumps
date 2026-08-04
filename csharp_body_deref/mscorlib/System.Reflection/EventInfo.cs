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
		[Address(RVA = "0x3BD0A30", Offset = "0x3BD0A30", VA = "0x3BD0A30", Slot = "7")]
		get
		{
			return default(MemberTypes);
		}
	}

	[Token(Token = "0x170004A3")]
	public virtual Type EventHandlerType
	{
		[Token(Token = "0x60023FA")]
		[Address(RVA = "0x3BD0A80", Offset = "0x3BD0A80", VA = "0x3BD0A80", Slot = "21")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60023F3")]
	[Address(RVA = "0x3BD0A10", Offset = "0x3BD0A10", VA = "0x3BD0A10")]
	protected EventInfo()
	{
	}

	[Token(Token = "0x60023F5")]
	[Address(RVA = "0x3BD0A40", Offset = "0x3BD0A40", VA = "0x3BD0A40", Slot = "16")]
	public MethodInfo GetAddMethod()
	{
		return null;
	}

	[Token(Token = "0x60023F6")]
	[Address(RVA = "0x3BD0A60", Offset = "0x3BD0A60", VA = "0x3BD0A60", Slot = "17")]
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
	[Address(RVA = "0x3BD0B90", Offset = "0x3BD0B90", VA = "0x3BD0B90", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60023FC")]
	[Address(RVA = "0x3BD0BB0", Offset = "0x3BD0BB0", VA = "0x3BD0BB0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60023FD")]
	[Address(RVA = "0x3BD0BD0", Offset = "0x3BD0BD0", VA = "0x3BD0BD0")]
	public static bool operator ==(EventInfo left, EventInfo right)
	{
		return default(bool);
	}

	[Token(Token = "0x60023FE")]
	[Address(RVA = "0x3BD0C00", Offset = "0x3BD0C00", VA = "0x3BD0C00")]
	public static bool operator !=(EventInfo left, EventInfo right)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60023FF")]
	[Address(RVA = "0x3BD0C30", Offset = "0x3BD0C30", VA = "0x3BD0C30")]
	private static extern EventInfo internal_from_handle_type(IntPtr event_handle, IntPtr type_handle);

	[Token(Token = "0x6002400")]
	[Address(RVA = "0x3BD0C40", Offset = "0x3BD0C40", VA = "0x3BD0C40")]
	internal static EventInfo GetEventFromHandle(Mono.RuntimeEventHandle handle, RuntimeTypeHandle reflectedType)
	{
		return null;
	}
}
