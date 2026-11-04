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
[Token(Token = "0x2000507")]
public abstract class EventInfo : MemberInfo
{
	[Token(Token = "0x2000508")]
	private delegate void AddEventAdapter(object _this, Delegate dele);

	[Token(Token = "0x40013DF")]
	[FieldOffset(Offset = "0x10")]
	private AddEventAdapter cached_add_event;

	[Token(Token = "0x170004A5")]
	public override MemberTypes MemberType
	{
		[Token(Token = "0x6002476")]
		[Address(RVA = "0x846F80", Offset = "0x845580", VA = "0x180846F80", Slot = "7")]
		get
		{
			return default(MemberTypes);
		}
	}

	[Token(Token = "0x170004A6")]
	public virtual Type EventHandlerType
	{
		[Token(Token = "0x600247C")]
		[Address(RVA = "0x1A44600", Offset = "0x1A42C00", VA = "0x181A44600", Slot = "21")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002475")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected EventInfo()
	{
	}

	[Token(Token = "0x6002477")]
	[Address(RVA = "0x1A40D00", Offset = "0x1A3F300", VA = "0x181A40D00", Slot = "16")]
	public MethodInfo GetAddMethod()
	{
		return null;
	}

	[Token(Token = "0x6002478")]
	[Address(RVA = "0x19EADB0", Offset = "0x19E93B0", VA = "0x1819EADB0", Slot = "17")]
	public MethodInfo GetRemoveMethod()
	{
		return null;
	}

	[Token(Token = "0x6002479")]
	public abstract MethodInfo GetAddMethod(bool nonPublic);

	[Token(Token = "0x600247A")]
	public abstract MethodInfo GetRemoveMethod(bool nonPublic);

	[Token(Token = "0x600247B")]
	public abstract MethodInfo GetRaiseMethod(bool nonPublic);

	[Token(Token = "0x600247D")]
	[Address(RVA = "0x1A40580", Offset = "0x1A3EB80", VA = "0x181A40580", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600247E")]
	[Address(RVA = "0x198AC80", Offset = "0x1989280", VA = "0x18198AC80", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600247F")]
	[Address(RVA = "0x1A41670", Offset = "0x1A3FC70", VA = "0x181A41670")]
	public static bool operator ==(EventInfo left, EventInfo right)
	{
		return default(bool);
	}

	[Token(Token = "0x6002480")]
	[Address(RVA = "0x1A44730", Offset = "0x1A42D30", VA = "0x181A44730")]
	public static bool operator !=(EventInfo left, EventInfo right)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002481")]
	[Address(RVA = "0x1A44720", Offset = "0x1A42D20", VA = "0x181A44720")]
	private static extern EventInfo internal_from_handle_type(IntPtr event_handle, IntPtr type_handle);

	[Token(Token = "0x6002482")]
	[Address(RVA = "0x1A44550", Offset = "0x1A42B50", VA = "0x181A44550")]
	internal static EventInfo GetEventFromHandle(Mono.RuntimeEventHandle handle, RuntimeTypeHandle reflectedType)
	{
		return null;
	}
}
