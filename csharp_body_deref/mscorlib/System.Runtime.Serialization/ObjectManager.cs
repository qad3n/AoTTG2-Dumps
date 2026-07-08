using System.Reflection;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Runtime.Serialization;

[Token(Token = "0x20003DF")]
[ComVisible(true)]
public class ObjectManager
{
	[Token(Token = "0x4000FEC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private System.Runtime.Serialization.DeserializationEventHandler m_onDeserializationHandler;

	[Token(Token = "0x4000FED")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private SerializationEventHandler m_onDeserializedHandler;

	[Token(Token = "0x4000FEE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	internal System.Runtime.Serialization.ObjectHolder[] m_objects;

	[Token(Token = "0x4000FEF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	internal object m_topObject;

	[Token(Token = "0x4000FF0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	internal System.Runtime.Serialization.ObjectHolderList m_specialFixupObjects;

	[Token(Token = "0x4000FF1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	internal long m_fixupCount;

	[Token(Token = "0x4000FF2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	internal ISurrogateSelector m_selector;

	[Token(Token = "0x4000FF3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	internal StreamingContext m_context;

	[Token(Token = "0x1700041C")]
	internal object TopObject
	{
		[Token(Token = "0x6001F87")]
		[Address(RVA = "0x4EB33D0", Offset = "0x4EB33D0", VA = "0x4EB33D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001F86")]
		[Address(RVA = "0x4EB33C0", Offset = "0x4EB33C0", VA = "0x4EB33C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700041D")]
	internal System.Runtime.Serialization.ObjectHolderList SpecialFixupObjects
	{
		[Token(Token = "0x6001F88")]
		[Address(RVA = "0x4EB33E0", Offset = "0x4EB33E0", VA = "0x4EB33E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001F84")]
	[Address(RVA = "0x4EB3320", Offset = "0x4EB3320", VA = "0x4EB3320")]
	internal ObjectManager(ISurrogateSelector selector, StreamingContext context, bool checkSecurity, bool isCrossAppDomain)
	{
	}

	[Token(Token = "0x6001F85")]
	[Address(RVA = "0x4EB33B0", Offset = "0x4EB33B0", VA = "0x4EB33B0")]
	private bool CanCallGetType(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001F89")]
	[Address(RVA = "0x4EB3510", Offset = "0x4EB3510", VA = "0x4EB3510")]
	internal System.Runtime.Serialization.ObjectHolder FindObjectHolder(long objectID)
	{
		return null;
	}

	[Token(Token = "0x6001F8A")]
	[Address(RVA = "0x4EB3560", Offset = "0x4EB3560", VA = "0x4EB3560")]
	internal System.Runtime.Serialization.ObjectHolder FindOrCreateObjectHolder(long objectID)
	{
		return null;
	}

	[Token(Token = "0x6001F8B")]
	[Address(RVA = "0x4EB3640", Offset = "0x4EB3640", VA = "0x4EB3640")]
	private void AddObjectHolder(System.Runtime.Serialization.ObjectHolder holder)
	{
	}

	[Token(Token = "0x6001F8C")]
	[Address(RVA = "0x4EB3770", Offset = "0x4EB3770", VA = "0x4EB3770")]
	private bool GetCompletionInfo(System.Runtime.Serialization.FixupHolder fixup, out System.Runtime.Serialization.ObjectHolder holder, out object member, bool bThrowIfMissing)
	{
		return default(bool);
	}

	[Token(Token = "0x6001F8D")]
	[Address(RVA = "0x4EB3B90", Offset = "0x4EB3B90", VA = "0x4EB3B90")]
	private void FixupSpecialObject(System.Runtime.Serialization.ObjectHolder holder)
	{
	}

	[Token(Token = "0x6001F8E")]
	[Address(RVA = "0x4EB4E00", Offset = "0x4EB4E00", VA = "0x4EB4E00")]
	private bool ResolveObjectReference(System.Runtime.Serialization.ObjectHolder holder)
	{
		return default(bool);
	}

	[Token(Token = "0x6001F8F")]
	[Address(RVA = "0x4EB4390", Offset = "0x4EB4390", VA = "0x4EB4390")]
	private bool DoValueTypeFixup(FieldInfo memberToFix, System.Runtime.Serialization.ObjectHolder holder, object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001F90")]
	[Address(RVA = "0x4EB5110", Offset = "0x4EB5110", VA = "0x4EB5110")]
	internal void CompleteObject(System.Runtime.Serialization.ObjectHolder holder, bool bObjectFullyComplete)
	{
	}

	[Token(Token = "0x6001F91")]
	[Address(RVA = "0x4EB4AA0", Offset = "0x4EB4AA0", VA = "0x4EB4AA0")]
	private void DoNewlyRegisteredObjectFixups(System.Runtime.Serialization.ObjectHolder holder)
	{
	}

	[Token(Token = "0x6001F92")]
	[Address(RVA = "0x4EB5D80", Offset = "0x4EB5D80", VA = "0x4EB5D80", Slot = "4")]
	public virtual object GetObject(long objectID)
	{
		return null;
	}

	[Token(Token = "0x6001F93")]
	[Address(RVA = "0x4EB5EF0", Offset = "0x4EB5EF0", VA = "0x4EB5EF0")]
	internal void RegisterString(string obj, long objectID, SerializationInfo info, long idOfContainingObj, MemberInfo member)
	{
	}

	[Token(Token = "0x6001F94")]
	[Address(RVA = "0x4EB60E0", Offset = "0x4EB60E0", VA = "0x4EB60E0")]
	public void RegisterObject(object obj, long objectID, SerializationInfo info, long idOfContainingObj, MemberInfo member, int[] arrayIndex)
	{
	}

	[Token(Token = "0x6001F95")]
	[Address(RVA = "0x4EB40B0", Offset = "0x4EB40B0", VA = "0x4EB40B0")]
	internal void CompleteISerializableObject(object obj, SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001F96")]
	[Address(RVA = "0x4EB6BA0", Offset = "0x4EB6BA0", VA = "0x4EB6BA0")]
	internal static System.Reflection.RuntimeConstructorInfo GetConstructor(System.RuntimeType t)
	{
		return null;
	}

	[Token(Token = "0x6001F97")]
	[Address(RVA = "0x4EB6CC0", Offset = "0x4EB6CC0", VA = "0x4EB6CC0", Slot = "5")]
	public virtual void DoFixups()
	{
	}

	[Token(Token = "0x6001F98")]
	[Address(RVA = "0x4EB7220", Offset = "0x4EB7220", VA = "0x4EB7220")]
	private void RegisterFixup(System.Runtime.Serialization.FixupHolder fixup, long objectToBeFixed, long objectRequired)
	{
	}

	[Token(Token = "0x6001F99")]
	[Address(RVA = "0x4EB7530", Offset = "0x4EB7530", VA = "0x4EB7530", Slot = "6")]
	public virtual void RecordFixup(long objectToBeFixed, MemberInfo member, long objectRequired)
	{
	}

	[Token(Token = "0x6001F9A")]
	[Address(RVA = "0x4EB77E0", Offset = "0x4EB77E0", VA = "0x4EB77E0", Slot = "7")]
	public virtual void RecordDelayedFixup(long objectToBeFixed, string memberName, long objectRequired)
	{
	}

	[Token(Token = "0x6001F9B")]
	[Address(RVA = "0x4EB7920", Offset = "0x4EB7920", VA = "0x4EB7920", Slot = "8")]
	public virtual void RecordArrayElementFixup(long arrayToBeFixed, int[] indices, long objectRequired)
	{
	}

	[Token(Token = "0x6001F9C")]
	[Address(RVA = "0x4EB7A60", Offset = "0x4EB7A60", VA = "0x4EB7A60", Slot = "9")]
	public virtual void RaiseDeserializationEvent()
	{
	}

	[Token(Token = "0x6001F9D")]
	[Address(RVA = "0x4EB7AA0", Offset = "0x4EB7AA0", VA = "0x4EB7AA0", Slot = "10")]
	internal virtual void AddOnDeserialization(System.Runtime.Serialization.DeserializationEventHandler handler)
	{
	}

	[Token(Token = "0x6001F9E")]
	[Address(RVA = "0x4EB7B20", Offset = "0x4EB7B20", VA = "0x4EB7B20", Slot = "11")]
	internal virtual void AddOnDeserialized(object obj)
	{
	}

	[Token(Token = "0x6001F9F")]
	[Address(RVA = "0x4EB7BB0", Offset = "0x4EB7BB0", VA = "0x4EB7BB0", Slot = "12")]
	internal virtual void RaiseOnDeserializedEvent(object obj)
	{
	}

	[Token(Token = "0x6001FA0")]
	[Address(RVA = "0x4EB7C30", Offset = "0x4EB7C30", VA = "0x4EB7C30")]
	public void RaiseOnDeserializingEvent(object obj)
	{
	}
}
