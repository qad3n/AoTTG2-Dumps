// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.ObjectManager
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Reflection;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Runtime.Serialization;

[Token(Token = "0x200040E")]
[ComVisible(true)]
public class ObjectManager
{
	[Token(Token = "0x4000FF2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private System.Runtime.Serialization.DeserializationEventHandler m_onDeserializationHandler;

	[Token(Token = "0x4000FF3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private SerializationEventHandler m_onDeserializedHandler;

	[Token(Token = "0x4000FF4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	internal System.Runtime.Serialization.ObjectHolder[] m_objects;

	[Token(Token = "0x4000FF5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	internal object m_topObject;

	[Token(Token = "0x4000FF6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	internal System.Runtime.Serialization.ObjectHolderList m_specialFixupObjects;

	[Token(Token = "0x4000FF7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	internal long m_fixupCount;

	[Token(Token = "0x4000FF8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	internal ISurrogateSelector m_selector;

	[Token(Token = "0x4000FF9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	internal StreamingContext m_context;

	[Token(Token = "0x1700041E")]
	internal object TopObject
	{
		[Token(Token = "0x6001FF6")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001FF5")]
		[Address(RVA = "0x584CA0", Offset = "0x5832A0", VA = "0x180584CA0")]
		set
		{
		}
	}

	[Token(Token = "0x1700041F")]
	internal System.Runtime.Serialization.ObjectHolderList SpecialFixupObjects
	{
		[Token(Token = "0x6001FF7")]
		[Address(RVA = "0x1A1AAE0", Offset = "0x1A190E0", VA = "0x181A1AAE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001FF3")]
	[Address(RVA = "0x1A1AA50", Offset = "0x1A19050", VA = "0x181A1AA50")]
	internal ObjectManager(ISurrogateSelector selector, StreamingContext context, bool checkSecurity, bool isCrossAppDomain)
	{
	}

	[Token(Token = "0x6001FF4")]
	[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110")]
	private bool CanCallGetType(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001FF8")]
	[Address(RVA = "0x1A18910", Offset = "0x1A16F10", VA = "0x181A18910")]
	internal System.Runtime.Serialization.ObjectHolder FindObjectHolder(long objectID)
	{
		return null;
	}

	[Token(Token = "0x6001FF9")]
	[Address(RVA = "0x1A18960", Offset = "0x1A16F60", VA = "0x181A18960")]
	internal System.Runtime.Serialization.ObjectHolder FindOrCreateObjectHolder(long objectID)
	{
		return null;
	}

	[Token(Token = "0x6001FFA")]
	[Address(RVA = "0x1A16920", Offset = "0x1A14F20", VA = "0x181A16920")]
	private void AddObjectHolder(System.Runtime.Serialization.ObjectHolder holder)
	{
	}

	[Token(Token = "0x6001FFB")]
	[Address(RVA = "0x1A18E50", Offset = "0x1A17450", VA = "0x181A18E50")]
	private bool GetCompletionInfo(System.Runtime.Serialization.FixupHolder fixup, out System.Runtime.Serialization.ObjectHolder holder, out object member, bool bThrowIfMissing)
	{
		return default(bool);
	}

	[Token(Token = "0x6001FFC")]
	[Address(RVA = "0x1A18AB0", Offset = "0x1A170B0", VA = "0x181A18AB0")]
	private void FixupSpecialObject(System.Runtime.Serialization.ObjectHolder holder)
	{
	}

	[Token(Token = "0x6001FFD")]
	[Address(RVA = "0x1A1A840", Offset = "0x1A18E40", VA = "0x181A1A840")]
	private bool ResolveObjectReference(System.Runtime.Serialization.ObjectHolder holder)
	{
		return default(bool);
	}

	[Token(Token = "0x6001FFE")]
	[Address(RVA = "0x1A18330", Offset = "0x1A16930", VA = "0x181A18330")]
	private bool DoValueTypeFixup(FieldInfo memberToFix, System.Runtime.Serialization.ObjectHolder holder, object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001FFF")]
	[Address(RVA = "0x1A16DE0", Offset = "0x1A153E0", VA = "0x181A16DE0")]
	internal void CompleteObject(System.Runtime.Serialization.ObjectHolder holder, bool bObjectFullyComplete)
	{
	}

	[Token(Token = "0x6002000")]
	[Address(RVA = "0x1A181C0", Offset = "0x1A167C0", VA = "0x181A181C0")]
	private void DoNewlyRegisteredObjectFixups(System.Runtime.Serialization.ObjectHolder holder)
	{
	}

	[Token(Token = "0x6002001")]
	[Address(RVA = "0x1A19330", Offset = "0x1A17930", VA = "0x181A19330", Slot = "4")]
	public virtual object GetObject(long objectID)
	{
		return null;
	}

	[Token(Token = "0x6002002")]
	[Address(RVA = "0x1A1A700", Offset = "0x1A18D00", VA = "0x181A1A700")]
	internal void RegisterString(string obj, long objectID, SerializationInfo info, long idOfContainingObj, MemberInfo member)
	{
	}

	[Token(Token = "0x6002003")]
	[Address(RVA = "0x1A19E90", Offset = "0x1A18490", VA = "0x181A19E90")]
	public void RegisterObject(object obj, long objectID, SerializationInfo info, long idOfContainingObj, MemberInfo member, int[] arrayIndex)
	{
	}

	[Token(Token = "0x6002004")]
	[Address(RVA = "0x1A16B90", Offset = "0x1A15190", VA = "0x181A16B90")]
	internal void CompleteISerializableObject(object obj, SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6002005")]
	[Address(RVA = "0x1A19200", Offset = "0x1A17800", VA = "0x181A19200")]
	internal static System.Reflection.RuntimeConstructorInfo GetConstructor(System.RuntimeType t)
	{
		return null;
	}

	[Token(Token = "0x6002006")]
	[Address(RVA = "0x1A17D70", Offset = "0x1A16370", VA = "0x181A17D70", Slot = "5")]
	public virtual void DoFixups()
	{
	}

	[Token(Token = "0x6002007")]
	[Address(RVA = "0x1A19B90", Offset = "0x1A18190", VA = "0x181A19B90")]
	private void RegisterFixup(System.Runtime.Serialization.FixupHolder fixup, long objectToBeFixed, long objectRequired)
	{
	}

	[Token(Token = "0x6002008")]
	[Address(RVA = "0x1A198E0", Offset = "0x1A17EE0", VA = "0x181A198E0", Slot = "6")]
	public virtual void RecordFixup(long objectToBeFixed, MemberInfo member, long objectRequired)
	{
	}

	[Token(Token = "0x6002009")]
	[Address(RVA = "0x1A19770", Offset = "0x1A17D70", VA = "0x181A19770", Slot = "7")]
	public virtual void RecordDelayedFixup(long objectToBeFixed, string memberName, long objectRequired)
	{
	}

	[Token(Token = "0x600200A")]
	[Address(RVA = "0x1A19600", Offset = "0x1A17C00", VA = "0x181A19600", Slot = "8")]
	public virtual void RecordArrayElementFixup(long arrayToBeFixed, int[] indices, long objectRequired)
	{
	}

	[Token(Token = "0x600200B")]
	[Address(RVA = "0x1A19420", Offset = "0x1A17A20", VA = "0x181A19420", Slot = "9")]
	public virtual void RaiseDeserializationEvent()
	{
	}

	[Token(Token = "0x600200C")]
	[Address(RVA = "0x1A16A50", Offset = "0x1A15050", VA = "0x181A16A50", Slot = "10")]
	internal virtual void AddOnDeserialization(System.Runtime.Serialization.DeserializationEventHandler handler)
	{
	}

	[Token(Token = "0x600200D")]
	[Address(RVA = "0x1A16AF0", Offset = "0x1A150F0", VA = "0x181A16AF0", Slot = "11")]
	internal virtual void AddOnDeserialized(object obj)
	{
	}

	[Token(Token = "0x600200E")]
	[Address(RVA = "0x1A19480", Offset = "0x1A17A80", VA = "0x181A19480", Slot = "12")]
	internal virtual void RaiseOnDeserializedEvent(object obj)
	{
	}

	[Token(Token = "0x600200F")]
	[Address(RVA = "0x1A19540", Offset = "0x1A17B40", VA = "0x181A19540")]
	public void RaiseOnDeserializingEvent(object obj)
	{
	}
}
