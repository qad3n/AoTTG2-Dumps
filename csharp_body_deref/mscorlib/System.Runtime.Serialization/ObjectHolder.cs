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

[Token(Token = "0x200040F")]
internal sealed class ObjectHolder
{
	[Token(Token = "0x4000FFA")]
	[FieldOffset(Offset = "0x10")]
	private object m_object;

	[Token(Token = "0x4000FFB")]
	[FieldOffset(Offset = "0x18")]
	internal long m_id;

	[Token(Token = "0x4000FFC")]
	[FieldOffset(Offset = "0x20")]
	private int m_missingElementsRemaining;

	[Token(Token = "0x4000FFD")]
	[FieldOffset(Offset = "0x24")]
	private int m_missingDecendents;

	[Token(Token = "0x4000FFE")]
	[FieldOffset(Offset = "0x28")]
	internal SerializationInfo m_serInfo;

	[Token(Token = "0x4000FFF")]
	[FieldOffset(Offset = "0x30")]
	internal ISerializationSurrogate m_surrogate;

	[Token(Token = "0x4001000")]
	[FieldOffset(Offset = "0x38")]
	internal System.Runtime.Serialization.FixupHolderList m_missingElements;

	[Token(Token = "0x4001001")]
	[FieldOffset(Offset = "0x40")]
	internal System.Runtime.Serialization.LongList m_dependentObjects;

	[Token(Token = "0x4001002")]
	[FieldOffset(Offset = "0x48")]
	internal System.Runtime.Serialization.ObjectHolder m_next;

	[Token(Token = "0x4001003")]
	[FieldOffset(Offset = "0x50")]
	internal int m_flags;

	[Token(Token = "0x4001004")]
	[FieldOffset(Offset = "0x54")]
	private bool m_markForFixupWhenAvailable;

	[Token(Token = "0x4001005")]
	[FieldOffset(Offset = "0x58")]
	private System.Runtime.Serialization.ValueTypeFixupInfo m_valueFixup;

	[Token(Token = "0x4001006")]
	[FieldOffset(Offset = "0x60")]
	private System.Runtime.Serialization.TypeLoadExceptionHolder m_typeLoad;

	[Token(Token = "0x4001007")]
	[FieldOffset(Offset = "0x68")]
	private bool m_reachable;

	[Token(Token = "0x17000420")]
	internal bool IsIncompleteObjectReference
	{
		[Token(Token = "0x600201C")]
		[Address(RVA = "0x1A16070", Offset = "0x1A14670", VA = "0x181A16070")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600201D")]
		[Address(RVA = "0x1A16100", Offset = "0x1A14700", VA = "0x181A16100")]
		set
		{
		}
	}

	[Token(Token = "0x17000421")]
	internal bool RequiresDelayedFixup
	{
		[Token(Token = "0x600201E")]
		[Address(RVA = "0x1A16080", Offset = "0x1A14680", VA = "0x181A16080")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000422")]
	internal bool RequiresValueTypeFixup
	{
		[Token(Token = "0x600201F")]
		[Address(RVA = "0x1A160B0", Offset = "0x1A146B0", VA = "0x181A160B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000423")]
	internal bool ValueTypeFixupPerformed
	{
		[Token(Token = "0x6002020")]
		[Address(RVA = "0x1A160D0", Offset = "0x1A146D0", VA = "0x181A160D0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002021")]
		[Address(RVA = "0x1A16140", Offset = "0x1A14740", VA = "0x181A16140")]
		set
		{
		}
	}

	[Token(Token = "0x17000424")]
	internal bool HasISerializable
	{
		[Token(Token = "0x6002022")]
		[Address(RVA = "0x1A16050", Offset = "0x1A14650", VA = "0x181A16050")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000425")]
	internal bool HasSurrogate
	{
		[Token(Token = "0x6002023")]
		[Address(RVA = "0x1A16060", Offset = "0x1A14660", VA = "0x181A16060")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000426")]
	internal bool CanSurrogatedObjectValueChange
	{
		[Token(Token = "0x6002024")]
		[Address(RVA = "0x1A15F80", Offset = "0x1A14580", VA = "0x181A15F80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000427")]
	internal bool CanObjectValueChange
	{
		[Token(Token = "0x6002025")]
		[Address(RVA = "0x1A15F60", Offset = "0x1A14560", VA = "0x181A15F60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000428")]
	internal int DirectlyDependentObjects
	{
		[Token(Token = "0x6002026")]
		[Address(RVA = "0xA4C170", Offset = "0xA4A770", VA = "0x180A4C170")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000429")]
	internal int TotalDependentObjects
	{
		[Token(Token = "0x6002027")]
		[Address(RVA = "0x19818D0", Offset = "0x197FED0", VA = "0x1819818D0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700042A")]
	internal bool Reachable
	{
		[Token(Token = "0x6002028")]
		[Address(RVA = "0x12BF1A0", Offset = "0x12BD7A0", VA = "0x1812BF1A0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002029")]
		[Address(RVA = "0x12BF400", Offset = "0x12BDA00", VA = "0x1812BF400")]
		set
		{
		}
	}

	[Token(Token = "0x1700042B")]
	internal bool TypeLoadExceptionReachable
	{
		[Token(Token = "0x600202A")]
		[Address(RVA = "0x1A160C0", Offset = "0x1A146C0", VA = "0x181A160C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700042C")]
	internal System.Runtime.Serialization.TypeLoadExceptionHolder TypeLoadException
	{
		[Token(Token = "0x600202B")]
		[Address(RVA = "0x152F220", Offset = "0x152D820", VA = "0x18152F220")]
		get
		{
			return null;
		}
		[Token(Token = "0x600202C")]
		[Address(RVA = "0x152F2F0", Offset = "0x152D8F0", VA = "0x18152F2F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700042D")]
	internal object ObjectValue
	{
		[Token(Token = "0x600202D")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700042E")]
	internal SerializationInfo SerializationInfo
	{
		[Token(Token = "0x600202F")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002030")]
		[Address(RVA = "0x584CA0", Offset = "0x5832A0", VA = "0x180584CA0")]
		set
		{
		}
	}

	[Token(Token = "0x1700042F")]
	internal ISerializationSurrogate Surrogate
	{
		[Token(Token = "0x6002031")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000430")]
	internal System.Runtime.Serialization.LongList DependentObjects
	{
		[Token(Token = "0x6002032")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002033")]
		[Address(RVA = "0xE8F700", Offset = "0xE8DD00", VA = "0x180E8F700")]
		set
		{
		}
	}

	[Token(Token = "0x17000431")]
	internal bool RequiresSerInfoFixup
	{
		[Token(Token = "0x6002034")]
		[Address(RVA = "0x1A16090", Offset = "0x1A14690", VA = "0x181A16090")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002035")]
		[Address(RVA = "0x1A16120", Offset = "0x1A14720", VA = "0x181A16120")]
		set
		{
		}
	}

	[Token(Token = "0x17000432")]
	internal System.Runtime.Serialization.ValueTypeFixupInfo ValueFixup
	{
		[Token(Token = "0x6002036")]
		[Address(RVA = "0x58A570", Offset = "0x588B70", VA = "0x18058A570")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000433")]
	internal bool CompletelyFixed
	{
		[Token(Token = "0x6002037")]
		[Address(RVA = "0x1A16010", Offset = "0x1A14610", VA = "0x181A16010")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000434")]
	internal long ContainerID
	{
		[Token(Token = "0x6002038")]
		[Address(RVA = "0x1A16030", Offset = "0x1A14630", VA = "0x181A16030")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x6002010")]
	[Address(RVA = "0x1A15B10", Offset = "0x1A14110", VA = "0x181A15B10")]
	internal ObjectHolder(long objID)
	{
	}

	[Token(Token = "0x6002011")]
	[Address(RVA = "0x1A15BD0", Offset = "0x1A141D0", VA = "0x181A15BD0")]
	internal ObjectHolder(object obj, long objID, SerializationInfo info, ISerializationSurrogate surrogate, long idOfContainingObj, FieldInfo field, int[] arrayIndex)
	{
	}

	[Token(Token = "0x6002012")]
	[Address(RVA = "0x1A15E50", Offset = "0x1A14450", VA = "0x181A15E50")]
	internal ObjectHolder(string obj, long objID, SerializationInfo info, ISerializationSurrogate surrogate, long idOfContainingObj, FieldInfo field, int[] arrayIndex)
	{
	}

	[Token(Token = "0x6002013")]
	[Address(RVA = "0x1A155B0", Offset = "0x1A13BB0", VA = "0x181A155B0")]
	private void IncrementDescendentFixups(int amount)
	{
	}

	[Token(Token = "0x6002014")]
	[Address(RVA = "0x1A15590", Offset = "0x1A13B90", VA = "0x181A15590")]
	internal void DecrementFixupsRemaining(ObjectManager manager)
	{
	}

	[Token(Token = "0x6002015")]
	[Address(RVA = "0x1A155D0", Offset = "0x1A13BD0", VA = "0x181A155D0")]
	internal void RemoveDependency(long id)
	{
	}

	[Token(Token = "0x6002016")]
	[Address(RVA = "0x1A15490", Offset = "0x1A13A90", VA = "0x181A15490")]
	internal void AddFixup(System.Runtime.Serialization.FixupHolder fixup, ObjectManager manager)
	{
	}

	[Token(Token = "0x6002017")]
	[Address(RVA = "0x1A159A0", Offset = "0x1A13FA0", VA = "0x181A159A0")]
	private void UpdateDescendentDependencyChain(int amount, ObjectManager manager)
	{
	}

	[Token(Token = "0x6002018")]
	[Address(RVA = "0x1A15320", Offset = "0x1A13920", VA = "0x181A15320")]
	internal void AddDependency(long dependentObject)
	{
	}

	[Token(Token = "0x6002019")]
	[Address(RVA = "0x1A15800", Offset = "0x1A13E00", VA = "0x181A15800")]
	internal void UpdateData(object obj, SerializationInfo info, ISerializationSurrogate surrogate, long idOfContainer, FieldInfo field, int[] arrayIndex, ObjectManager manager)
	{
	}

	[Token(Token = "0x600201A")]
	[Address(RVA = "0x1A155C0", Offset = "0x1A13BC0", VA = "0x181A155C0")]
	internal void MarkForCompletionWhenAvailable()
	{
	}

	[Token(Token = "0x600201B")]
	[Address(RVA = "0x1A15640", Offset = "0x1A13C40", VA = "0x181A15640")]
	internal void SetFlags()
	{
	}

	[Token(Token = "0x600202E")]
	[Address(RVA = "0x1A156D0", Offset = "0x1A13CD0", VA = "0x181A156D0")]
	internal void SetObjectValue(object obj, ObjectManager manager)
	{
	}
}
