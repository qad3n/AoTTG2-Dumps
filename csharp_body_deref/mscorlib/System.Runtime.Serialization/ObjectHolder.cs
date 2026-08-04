// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.ObjectHolder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3B996A0", Offset = "0x3B996A0", VA = "0x3B996A0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001FAE")]
		[Address(RVA = "0x3B9AC10", Offset = "0x3B9AC10", VA = "0x3B9AC10")]
		set
		{
		}
	}

	[Token(Token = "0x1700041F")]
	internal bool RequiresDelayedFixup
	{
		[Token(Token = "0x6001FAF")]
		[Address(RVA = "0x3B9C4C0", Offset = "0x3B9C4C0", VA = "0x3B9C4C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000420")]
	internal bool RequiresValueTypeFixup
	{
		[Token(Token = "0x6001FB0")]
		[Address(RVA = "0x3B99E70", Offset = "0x3B99E70", VA = "0x3B99E70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000421")]
	internal bool ValueTypeFixupPerformed
	{
		[Token(Token = "0x6001FB1")]
		[Address(RVA = "0x3B99E80", Offset = "0x3B99E80", VA = "0x3B99E80")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001FB2")]
		[Address(RVA = "0x3B9B7F0", Offset = "0x3B9B7F0", VA = "0x3B9B7F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000422")]
	internal bool HasISerializable
	{
		[Token(Token = "0x6001FB3")]
		[Address(RVA = "0x3B9B5E0", Offset = "0x3B9B5E0", VA = "0x3B9B5E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000423")]
	internal bool HasSurrogate
	{
		[Token(Token = "0x6001FB4")]
		[Address(RVA = "0x3B999B0", Offset = "0x3B999B0", VA = "0x3B999B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000424")]
	internal bool CanSurrogatedObjectValueChange
	{
		[Token(Token = "0x6001FB5")]
		[Address(RVA = "0x3B999C0", Offset = "0x3B999C0", VA = "0x3B999C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000425")]
	internal bool CanObjectValueChange
	{
		[Token(Token = "0x6001FB6")]
		[Address(RVA = "0x3B99600", Offset = "0x3B99600", VA = "0x3B99600")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000426")]
	internal int DirectlyDependentObjects
	{
		[Token(Token = "0x6001FB7")]
		[Address(RVA = "0x3B9DA70", Offset = "0x3B9DA70", VA = "0x3B9DA70")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000427")]
	internal int TotalDependentObjects
	{
		[Token(Token = "0x6001FB8")]
		[Address(RVA = "0x3B9C6B0", Offset = "0x3B9C6B0", VA = "0x3B9C6B0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000428")]
	internal bool Reachable
	{
		[Token(Token = "0x6001FB9")]
		[Address(RVA = "0x3B9DA80", Offset = "0x3B9DA80", VA = "0x3B9DA80")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001FBA")]
		[Address(RVA = "0x3B9DA90", Offset = "0x3B9DA90", VA = "0x3B9DA90")]
		set
		{
		}
	}

	[Token(Token = "0x17000429")]
	internal bool TypeLoadExceptionReachable
	{
		[Token(Token = "0x6001FBB")]
		[Address(RVA = "0x3B9B7E0", Offset = "0x3B9B7E0", VA = "0x3B9B7E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700042A")]
	internal System.Runtime.Serialization.TypeLoadExceptionHolder TypeLoadException
	{
		[Token(Token = "0x6001FBC")]
		[Address(RVA = "0x3B9DAA0", Offset = "0x3B9DAA0", VA = "0x3B9DAA0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001FBD")]
		[Address(RVA = "0x3B9DAB0", Offset = "0x3B9DAB0", VA = "0x3B9DAB0")]
		set
		{
		}
	}

	[Token(Token = "0x1700042B")]
	internal object ObjectValue
	{
		[Token(Token = "0x6001FBE")]
		[Address(RVA = "0x3B9DAC0", Offset = "0x3B9DAC0", VA = "0x3B9DAC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700042C")]
	internal SerializationInfo SerializationInfo
	{
		[Token(Token = "0x6001FC0")]
		[Address(RVA = "0x3B9DAD0", Offset = "0x3B9DAD0", VA = "0x3B9DAD0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001FC1")]
		[Address(RVA = "0x3B9DAE0", Offset = "0x3B9DAE0", VA = "0x3B9DAE0")]
		set
		{
		}
	}

	[Token(Token = "0x1700042D")]
	internal ISerializationSurrogate Surrogate
	{
		[Token(Token = "0x6001FC2")]
		[Address(RVA = "0x3B9DAF0", Offset = "0x3B9DAF0", VA = "0x3B9DAF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700042E")]
	internal System.Runtime.Serialization.LongList DependentObjects
	{
		[Token(Token = "0x6001FC3")]
		[Address(RVA = "0x3B9DB00", Offset = "0x3B9DB00", VA = "0x3B9DB00")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001FC4")]
		[Address(RVA = "0x3B9DB10", Offset = "0x3B9DB10", VA = "0x3B9DB10")]
		set
		{
		}
	}

	[Token(Token = "0x1700042F")]
	internal bool RequiresSerInfoFixup
	{
		[Token(Token = "0x6001FC5")]
		[Address(RVA = "0x3B9CC80", Offset = "0x3B9CC80", VA = "0x3B9CC80")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001FC6")]
		[Address(RVA = "0x3B99E50", Offset = "0x3B99E50", VA = "0x3B99E50")]
		set
		{
		}
	}

	[Token(Token = "0x17000430")]
	internal System.Runtime.Serialization.ValueTypeFixupInfo ValueFixup
	{
		[Token(Token = "0x6001FC7")]
		[Address(RVA = "0x3B9DB20", Offset = "0x3B9DB20", VA = "0x3B9DB20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000431")]
	internal bool CompletelyFixed
	{
		[Token(Token = "0x6001FC8")]
		[Address(RVA = "0x3B995E0", Offset = "0x3B995E0", VA = "0x3B995E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000432")]
	internal long ContainerID
	{
		[Token(Token = "0x6001FC9")]
		[Address(RVA = "0x3B9D920", Offset = "0x3B9D920", VA = "0x3B9D920")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x6001FA1")]
	[Address(RVA = "0x3B99130", Offset = "0x3B99130", VA = "0x3B99130")]
	internal ObjectHolder(long objID)
	{
	}

	[Token(Token = "0x6001FA2")]
	[Address(RVA = "0x3B9C260", Offset = "0x3B9C260", VA = "0x3B9C260")]
	internal ObjectHolder(object obj, long objID, SerializationInfo info, ISerializationSurrogate surrogate, long idOfContainingObj, FieldInfo field, int[] arrayIndex)
	{
	}

	[Token(Token = "0x6001FA3")]
	[Address(RVA = "0x3B9BAE0", Offset = "0x3B9BAE0", VA = "0x3B9BAE0")]
	internal ObjectHolder(string obj, long objID, SerializationInfo info, ISerializationSurrogate surrogate, long idOfContainingObj, FieldInfo field, int[] arrayIndex)
	{
	}

	[Token(Token = "0x6001FA4")]
	[Address(RVA = "0x3B9D7D0", Offset = "0x3B9D7D0", VA = "0x3B9D7D0")]
	private void IncrementDescendentFixups(int amount)
	{
	}

	[Token(Token = "0x6001FA5")]
	[Address(RVA = "0x3B9B6F0", Offset = "0x3B9B6F0", VA = "0x3B9B6F0")]
	internal void DecrementFixupsRemaining(ObjectManager manager)
	{
	}

	[Token(Token = "0x6001FA6")]
	[Address(RVA = "0x3B9B760", Offset = "0x3B9B760", VA = "0x3B9B760")]
	internal void RemoveDependency(long id)
	{
	}

	[Token(Token = "0x6001FA7")]
	[Address(RVA = "0x3B9CE20", Offset = "0x3B9CE20", VA = "0x3B9CE20")]
	internal void AddFixup(System.Runtime.Serialization.FixupHolder fixup, ObjectManager manager)
	{
	}

	[Token(Token = "0x6001FA8")]
	[Address(RVA = "0x3B9D7E0", Offset = "0x3B9D7E0", VA = "0x3B9D7E0")]
	private void UpdateDescendentDependencyChain(int amount, ObjectManager manager)
	{
	}

	[Token(Token = "0x6001FA9")]
	[Address(RVA = "0x3B9CF70", Offset = "0x3B9CF70", VA = "0x3B9CF70")]
	internal void AddDependency(long dependentObject)
	{
	}

	[Token(Token = "0x6001FAA")]
	[Address(RVA = "0x3B9C4D0", Offset = "0x3B9C4D0", VA = "0x3B9C4D0")]
	internal void UpdateData(object obj, SerializationInfo info, ISerializationSurrogate surrogate, long idOfContainer, FieldInfo field, int[] arrayIndex, ObjectManager manager)
	{
	}

	[Token(Token = "0x6001FAB")]
	[Address(RVA = "0x3B9B840", Offset = "0x3B9B840", VA = "0x3B9B840")]
	internal void MarkForCompletionWhenAvailable()
	{
	}

	[Token(Token = "0x6001FAC")]
	[Address(RVA = "0x3B99B40", Offset = "0x3B99B40", VA = "0x3B99B40")]
	internal void SetFlags()
	{
	}

	[Token(Token = "0x6001FBF")]
	[Address(RVA = "0x3B99A50", Offset = "0x3B99A50", VA = "0x3B99A50")]
	internal void SetObjectValue(object obj, ObjectManager manager)
	{
	}
}
