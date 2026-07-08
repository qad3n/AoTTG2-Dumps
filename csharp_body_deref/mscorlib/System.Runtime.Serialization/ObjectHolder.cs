using System.Reflection;
using Il2CppDummyDll;

namespace System.Runtime.Serialization;

[Token(Token = "0x20003E0")]
internal sealed class ObjectHolder
{
	[Token(Token = "0x4000FF4")]
	[FieldOffset(Offset = "0x10")]
	private object m_object;

	[Token(Token = "0x4000FF5")]
	[FieldOffset(Offset = "0x18")]
	internal long m_id;

	[Token(Token = "0x4000FF6")]
	[FieldOffset(Offset = "0x20")]
	private int m_missingElementsRemaining;

	[Token(Token = "0x4000FF7")]
	[FieldOffset(Offset = "0x24")]
	private int m_missingDecendents;

	[Token(Token = "0x4000FF8")]
	[FieldOffset(Offset = "0x28")]
	internal SerializationInfo m_serInfo;

	[Token(Token = "0x4000FF9")]
	[FieldOffset(Offset = "0x30")]
	internal ISerializationSurrogate m_surrogate;

	[Token(Token = "0x4000FFA")]
	[FieldOffset(Offset = "0x38")]
	internal System.Runtime.Serialization.FixupHolderList m_missingElements;

	[Token(Token = "0x4000FFB")]
	[FieldOffset(Offset = "0x40")]
	internal System.Runtime.Serialization.LongList m_dependentObjects;

	[Token(Token = "0x4000FFC")]
	[FieldOffset(Offset = "0x48")]
	internal System.Runtime.Serialization.ObjectHolder m_next;

	[Token(Token = "0x4000FFD")]
	[FieldOffset(Offset = "0x50")]
	internal int m_flags;

	[Token(Token = "0x4000FFE")]
	[FieldOffset(Offset = "0x54")]
	private bool m_markForFixupWhenAvailable;

	[Token(Token = "0x4000FFF")]
	[FieldOffset(Offset = "0x58")]
	private System.Runtime.Serialization.ValueTypeFixupInfo m_valueFixup;

	[Token(Token = "0x4001000")]
	[FieldOffset(Offset = "0x60")]
	private System.Runtime.Serialization.TypeLoadExceptionHolder m_typeLoad;

	[Token(Token = "0x4001001")]
	[FieldOffset(Offset = "0x68")]
	private bool m_reachable;

	[Token(Token = "0x1700041E")]
	internal bool IsIncompleteObjectReference
	{
		[Token(Token = "0x6001FAD")]
		[Address(RVA = "0x4EB3B80", Offset = "0x4EB3B80", VA = "0x4EB3B80")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001FAE")]
		[Address(RVA = "0x4EB50F0", Offset = "0x4EB50F0", VA = "0x4EB50F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700041F")]
	internal bool RequiresDelayedFixup
	{
		[Token(Token = "0x6001FAF")]
		[Address(RVA = "0x4EB69A0", Offset = "0x4EB69A0", VA = "0x4EB69A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000420")]
	internal bool RequiresValueTypeFixup
	{
		[Token(Token = "0x6001FB0")]
		[Address(RVA = "0x4EB4350", Offset = "0x4EB4350", VA = "0x4EB4350")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000421")]
	internal bool ValueTypeFixupPerformed
	{
		[Token(Token = "0x6001FB1")]
		[Address(RVA = "0x4EB4360", Offset = "0x4EB4360", VA = "0x4EB4360")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001FB2")]
		[Address(RVA = "0x4EB5CD0", Offset = "0x4EB5CD0", VA = "0x4EB5CD0")]
		set
		{
		}
	}

	[Token(Token = "0x17000422")]
	internal bool HasISerializable
	{
		[Token(Token = "0x6001FB3")]
		[Address(RVA = "0x4EB5AC0", Offset = "0x4EB5AC0", VA = "0x4EB5AC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000423")]
	internal bool HasSurrogate
	{
		[Token(Token = "0x6001FB4")]
		[Address(RVA = "0x4EB3E90", Offset = "0x4EB3E90", VA = "0x4EB3E90")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000424")]
	internal bool CanSurrogatedObjectValueChange
	{
		[Token(Token = "0x6001FB5")]
		[Address(RVA = "0x4EB3EA0", Offset = "0x4EB3EA0", VA = "0x4EB3EA0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000425")]
	internal bool CanObjectValueChange
	{
		[Token(Token = "0x6001FB6")]
		[Address(RVA = "0x4EB3AE0", Offset = "0x4EB3AE0", VA = "0x4EB3AE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000426")]
	internal int DirectlyDependentObjects
	{
		[Token(Token = "0x6001FB7")]
		[Address(RVA = "0x4EB7F50", Offset = "0x4EB7F50", VA = "0x4EB7F50")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000427")]
	internal int TotalDependentObjects
	{
		[Token(Token = "0x6001FB8")]
		[Address(RVA = "0x4EB6B90", Offset = "0x4EB6B90", VA = "0x4EB6B90")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000428")]
	internal bool Reachable
	{
		[Token(Token = "0x6001FB9")]
		[Address(RVA = "0x4EB7F60", Offset = "0x4EB7F60", VA = "0x4EB7F60")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001FBA")]
		[Address(RVA = "0x4EB7F70", Offset = "0x4EB7F70", VA = "0x4EB7F70")]
		set
		{
		}
	}

	[Token(Token = "0x17000429")]
	internal bool TypeLoadExceptionReachable
	{
		[Token(Token = "0x6001FBB")]
		[Address(RVA = "0x4EB5CC0", Offset = "0x4EB5CC0", VA = "0x4EB5CC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700042A")]
	internal System.Runtime.Serialization.TypeLoadExceptionHolder TypeLoadException
	{
		[Token(Token = "0x6001FBC")]
		[Address(RVA = "0x4EB7F80", Offset = "0x4EB7F80", VA = "0x4EB7F80")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001FBD")]
		[Address(RVA = "0x4EB7F90", Offset = "0x4EB7F90", VA = "0x4EB7F90")]
		set
		{
		}
	}

	[Token(Token = "0x1700042B")]
	internal object ObjectValue
	{
		[Token(Token = "0x6001FBE")]
		[Address(RVA = "0x4EB7FA0", Offset = "0x4EB7FA0", VA = "0x4EB7FA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700042C")]
	internal SerializationInfo SerializationInfo
	{
		[Token(Token = "0x6001FC0")]
		[Address(RVA = "0x4EB7FB0", Offset = "0x4EB7FB0", VA = "0x4EB7FB0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001FC1")]
		[Address(RVA = "0x4EB7FC0", Offset = "0x4EB7FC0", VA = "0x4EB7FC0")]
		set
		{
		}
	}

	[Token(Token = "0x1700042D")]
	internal ISerializationSurrogate Surrogate
	{
		[Token(Token = "0x6001FC2")]
		[Address(RVA = "0x4EB7FD0", Offset = "0x4EB7FD0", VA = "0x4EB7FD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700042E")]
	internal System.Runtime.Serialization.LongList DependentObjects
	{
		[Token(Token = "0x6001FC3")]
		[Address(RVA = "0x4EB7FE0", Offset = "0x4EB7FE0", VA = "0x4EB7FE0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001FC4")]
		[Address(RVA = "0x4EB7FF0", Offset = "0x4EB7FF0", VA = "0x4EB7FF0")]
		set
		{
		}
	}

	[Token(Token = "0x1700042F")]
	internal bool RequiresSerInfoFixup
	{
		[Token(Token = "0x6001FC5")]
		[Address(RVA = "0x4EB7160", Offset = "0x4EB7160", VA = "0x4EB7160")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001FC6")]
		[Address(RVA = "0x4EB4330", Offset = "0x4EB4330", VA = "0x4EB4330")]
		set
		{
		}
	}

	[Token(Token = "0x17000430")]
	internal System.Runtime.Serialization.ValueTypeFixupInfo ValueFixup
	{
		[Token(Token = "0x6001FC7")]
		[Address(RVA = "0x4EB8000", Offset = "0x4EB8000", VA = "0x4EB8000")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000431")]
	internal bool CompletelyFixed
	{
		[Token(Token = "0x6001FC8")]
		[Address(RVA = "0x4EB3AC0", Offset = "0x4EB3AC0", VA = "0x4EB3AC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000432")]
	internal long ContainerID
	{
		[Token(Token = "0x6001FC9")]
		[Address(RVA = "0x4EB7E00", Offset = "0x4EB7E00", VA = "0x4EB7E00")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x6001FA1")]
	[Address(RVA = "0x4EB3610", Offset = "0x4EB3610", VA = "0x4EB3610")]
	internal ObjectHolder(long objID)
	{
	}

	[Token(Token = "0x6001FA2")]
	[Address(RVA = "0x4EB6740", Offset = "0x4EB6740", VA = "0x4EB6740")]
	internal ObjectHolder(object obj, long objID, SerializationInfo info, ISerializationSurrogate surrogate, long idOfContainingObj, FieldInfo field, int[] arrayIndex)
	{
	}

	[Token(Token = "0x6001FA3")]
	[Address(RVA = "0x4EB5FC0", Offset = "0x4EB5FC0", VA = "0x4EB5FC0")]
	internal ObjectHolder(string obj, long objID, SerializationInfo info, ISerializationSurrogate surrogate, long idOfContainingObj, FieldInfo field, int[] arrayIndex)
	{
	}

	[Token(Token = "0x6001FA4")]
	[Address(RVA = "0x4EB7CB0", Offset = "0x4EB7CB0", VA = "0x4EB7CB0")]
	private void IncrementDescendentFixups(int amount)
	{
	}

	[Token(Token = "0x6001FA5")]
	[Address(RVA = "0x4EB5BD0", Offset = "0x4EB5BD0", VA = "0x4EB5BD0")]
	internal void DecrementFixupsRemaining(ObjectManager manager)
	{
	}

	[Token(Token = "0x6001FA6")]
	[Address(RVA = "0x4EB5C40", Offset = "0x4EB5C40", VA = "0x4EB5C40")]
	internal void RemoveDependency(long id)
	{
	}

	[Token(Token = "0x6001FA7")]
	[Address(RVA = "0x4EB7300", Offset = "0x4EB7300", VA = "0x4EB7300")]
	internal void AddFixup(System.Runtime.Serialization.FixupHolder fixup, ObjectManager manager)
	{
	}

	[Token(Token = "0x6001FA8")]
	[Address(RVA = "0x4EB7CC0", Offset = "0x4EB7CC0", VA = "0x4EB7CC0")]
	private void UpdateDescendentDependencyChain(int amount, ObjectManager manager)
	{
	}

	[Token(Token = "0x6001FA9")]
	[Address(RVA = "0x4EB7450", Offset = "0x4EB7450", VA = "0x4EB7450")]
	internal void AddDependency(long dependentObject)
	{
	}

	[Token(Token = "0x6001FAA")]
	[Address(RVA = "0x4EB69B0", Offset = "0x4EB69B0", VA = "0x4EB69B0")]
	internal void UpdateData(object obj, SerializationInfo info, ISerializationSurrogate surrogate, long idOfContainer, FieldInfo field, int[] arrayIndex, ObjectManager manager)
	{
	}

	[Token(Token = "0x6001FAB")]
	[Address(RVA = "0x4EB5D20", Offset = "0x4EB5D20", VA = "0x4EB5D20")]
	internal void MarkForCompletionWhenAvailable()
	{
	}

	[Token(Token = "0x6001FAC")]
	[Address(RVA = "0x4EB4020", Offset = "0x4EB4020", VA = "0x4EB4020")]
	internal void SetFlags()
	{
	}

	[Token(Token = "0x6001FBF")]
	[Address(RVA = "0x4EB3F30", Offset = "0x4EB3F30", VA = "0x4EB3F30")]
	internal void SetObjectValue(object obj, ObjectManager manager)
	{
	}
}
