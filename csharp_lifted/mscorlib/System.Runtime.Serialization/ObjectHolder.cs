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

[Token(Token = "0x20003E8")]
internal sealed class ObjectHolder
{
	[Token(Token = "0x4000F5A")]
	[FieldOffset(Offset = "0x10")]
	private object m_object;

	[Token(Token = "0x4000F5B")]
	[FieldOffset(Offset = "0x18")]
	internal long m_id;

	[Token(Token = "0x4000F5C")]
	[FieldOffset(Offset = "0x20")]
	private int m_missingElementsRemaining;

	[Token(Token = "0x4000F5D")]
	[FieldOffset(Offset = "0x24")]
	private int m_missingDecendents;

	[Token(Token = "0x4000F5E")]
	[FieldOffset(Offset = "0x28")]
	internal SerializationInfo m_serInfo;

	[Token(Token = "0x4000F5F")]
	[FieldOffset(Offset = "0x30")]
	internal ISerializationSurrogate m_surrogate;

	[Token(Token = "0x4000F60")]
	[FieldOffset(Offset = "0x38")]
	internal System.Runtime.Serialization.FixupHolderList m_missingElements;

	[Token(Token = "0x4000F61")]
	[FieldOffset(Offset = "0x40")]
	internal System.Runtime.Serialization.LongList m_dependentObjects;

	[Token(Token = "0x4000F62")]
	[FieldOffset(Offset = "0x48")]
	internal System.Runtime.Serialization.ObjectHolder m_next;

	[Token(Token = "0x4000F63")]
	[FieldOffset(Offset = "0x50")]
	internal int m_flags;

	[Token(Token = "0x4000F64")]
	[FieldOffset(Offset = "0x54")]
	private bool m_markForFixupWhenAvailable;

	[Token(Token = "0x4000F65")]
	[FieldOffset(Offset = "0x58")]
	private System.Runtime.Serialization.ValueTypeFixupInfo m_valueFixup;

	[Token(Token = "0x4000F66")]
	[FieldOffset(Offset = "0x60")]
	private System.Runtime.Serialization.TypeLoadExceptionHolder m_typeLoad;

	[Token(Token = "0x4000F67")]
	[FieldOffset(Offset = "0x68")]
	private bool m_reachable;

	[Token(Token = "0x1700041F")]
	internal bool IsIncompleteObjectReference
	{
		[Token(Token = "0x6001FF2")]
		[Address(RVA = "0x53A0C60", Offset = "0x539FC60", VA = "0x53A0C60")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001FF3")]
		[Address(RVA = "0x53A22F0", Offset = "0x53A12F0", VA = "0x53A22F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000420")]
	internal bool RequiresDelayedFixup
	{
		[Token(Token = "0x6001FF4")]
		[Address(RVA = "0x53A3980", Offset = "0x53A2980", VA = "0x53A3980")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000421")]
	internal bool RequiresValueTypeFixup
	{
		[Token(Token = "0x6001FF5")]
		[Address(RVA = "0x53A1430", Offset = "0x53A0430", VA = "0x53A1430")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000422")]
	internal bool ValueTypeFixupPerformed
	{
		[Token(Token = "0x6001FF6")]
		[Address(RVA = "0x53A1440", Offset = "0x53A0440", VA = "0x53A1440")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001FF7")]
		[Address(RVA = "0x53A2CB0", Offset = "0x53A1CB0", VA = "0x53A2CB0")]
		set
		{
		}
	}

	[Token(Token = "0x17000423")]
	internal bool HasISerializable
	{
		[Token(Token = "0x6001FF8")]
		[Address(RVA = "0x53A2AB0", Offset = "0x53A1AB0", VA = "0x53A2AB0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000424")]
	internal bool HasSurrogate
	{
		[Token(Token = "0x6001FF9")]
		[Address(RVA = "0x53A0F70", Offset = "0x539FF70", VA = "0x53A0F70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000425")]
	internal bool CanSurrogatedObjectValueChange
	{
		[Token(Token = "0x6001FFA")]
		[Address(RVA = "0x53A0F80", Offset = "0x539FF80", VA = "0x53A0F80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000426")]
	internal bool CanObjectValueChange
	{
		[Token(Token = "0x6001FFB")]
		[Address(RVA = "0x53A0BC0", Offset = "0x539FBC0", VA = "0x53A0BC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000427")]
	internal int DirectlyDependentObjects
	{
		[Token(Token = "0x6001FFC")]
		[Address(RVA = "0x53A4FA0", Offset = "0x53A3FA0", VA = "0x53A4FA0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000428")]
	internal int TotalDependentObjects
	{
		[Token(Token = "0x6001FFD")]
		[Address(RVA = "0x53A3B80", Offset = "0x53A2B80", VA = "0x53A3B80")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000429")]
	internal bool Reachable
	{
		[Token(Token = "0x6001FFE")]
		[Address(RVA = "0x53A4FB0", Offset = "0x53A3FB0", VA = "0x53A4FB0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001FFF")]
		[Address(RVA = "0x53A4FC0", Offset = "0x53A3FC0", VA = "0x53A4FC0")]
		set
		{
		}
	}

	[Token(Token = "0x1700042A")]
	internal bool TypeLoadExceptionReachable
	{
		[Token(Token = "0x6002000")]
		[Address(RVA = "0x53A2CA0", Offset = "0x53A1CA0", VA = "0x53A2CA0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700042B")]
	internal System.Runtime.Serialization.TypeLoadExceptionHolder TypeLoadException
	{
		[Token(Token = "0x6002001")]
		[Address(RVA = "0x53A4FD0", Offset = "0x53A3FD0", VA = "0x53A4FD0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002002")]
		[Address(RVA = "0x53A4FE0", Offset = "0x53A3FE0", VA = "0x53A4FE0")]
		set
		{
		}
	}

	[Token(Token = "0x1700042C")]
	internal object ObjectValue
	{
		[Token(Token = "0x6002003")]
		[Address(RVA = "0x53A4FF0", Offset = "0x53A3FF0", VA = "0x53A4FF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700042D")]
	internal SerializationInfo SerializationInfo
	{
		[Token(Token = "0x6002005")]
		[Address(RVA = "0x53A5000", Offset = "0x53A4000", VA = "0x53A5000")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002006")]
		[Address(RVA = "0x53A5010", Offset = "0x53A4010", VA = "0x53A5010")]
		set
		{
		}
	}

	[Token(Token = "0x1700042E")]
	internal ISerializationSurrogate Surrogate
	{
		[Token(Token = "0x6002007")]
		[Address(RVA = "0x53A5020", Offset = "0x53A4020", VA = "0x53A5020")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700042F")]
	internal System.Runtime.Serialization.LongList DependentObjects
	{
		[Token(Token = "0x6002008")]
		[Address(RVA = "0x53A5030", Offset = "0x53A4030", VA = "0x53A5030")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002009")]
		[Address(RVA = "0x53A5040", Offset = "0x53A4040", VA = "0x53A5040")]
		set
		{
		}
	}

	[Token(Token = "0x17000430")]
	internal bool RequiresSerInfoFixup
	{
		[Token(Token = "0x600200A")]
		[Address(RVA = "0x53A41D0", Offset = "0x53A31D0", VA = "0x53A41D0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600200B")]
		[Address(RVA = "0x53A1410", Offset = "0x53A0410", VA = "0x53A1410")]
		set
		{
		}
	}

	[Token(Token = "0x17000431")]
	internal System.Runtime.Serialization.ValueTypeFixupInfo ValueFixup
	{
		[Token(Token = "0x600200C")]
		[Address(RVA = "0x53A5050", Offset = "0x53A4050", VA = "0x53A5050")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000432")]
	internal bool CompletelyFixed
	{
		[Token(Token = "0x600200D")]
		[Address(RVA = "0x53A0BA0", Offset = "0x539FBA0", VA = "0x53A0BA0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000433")]
	internal long ContainerID
	{
		[Token(Token = "0x600200E")]
		[Address(RVA = "0x53A4E50", Offset = "0x53A3E50", VA = "0x53A4E50")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x6001FE6")]
	[Address(RVA = "0x53A06D0", Offset = "0x539F6D0", VA = "0x53A06D0")]
	internal ObjectHolder(long objID)
	{
	}

	[Token(Token = "0x6001FE7")]
	[Address(RVA = "0x53A3720", Offset = "0x53A2720", VA = "0x53A3720")]
	internal ObjectHolder(object obj, long objID, SerializationInfo info, ISerializationSurrogate surrogate, long idOfContainingObj, FieldInfo field, int[] arrayIndex)
	{
	}

	[Token(Token = "0x6001FE8")]
	[Address(RVA = "0x53A2FC0", Offset = "0x53A1FC0", VA = "0x53A2FC0")]
	internal ObjectHolder(string obj, long objID, SerializationInfo info, ISerializationSurrogate surrogate, long idOfContainingObj, FieldInfo field, int[] arrayIndex)
	{
	}

	[Token(Token = "0x6001FE9")]
	[Address(RVA = "0x53A4D00", Offset = "0x53A3D00", VA = "0x53A4D00")]
	private void IncrementDescendentFixups(int amount)
	{
	}

	[Token(Token = "0x6001FEA")]
	[Address(RVA = "0x53A2BC0", Offset = "0x53A1BC0", VA = "0x53A2BC0")]
	internal void DecrementFixupsRemaining(ObjectManager manager)
	{
	}

	[Token(Token = "0x6001FEB")]
	[Address(RVA = "0x53A2C20", Offset = "0x53A1C20", VA = "0x53A2C20")]
	internal void RemoveDependency(long id)
	{
	}

	[Token(Token = "0x6001FEC")]
	[Address(RVA = "0x53A4380", Offset = "0x53A3380", VA = "0x53A4380")]
	internal void AddFixup(System.Runtime.Serialization.FixupHolder fixup, ObjectManager manager)
	{
	}

	[Token(Token = "0x6001FED")]
	[Address(RVA = "0x53A4D10", Offset = "0x53A3D10", VA = "0x53A4D10")]
	private void UpdateDescendentDependencyChain(int amount, ObjectManager manager)
	{
	}

	[Token(Token = "0x6001FEE")]
	[Address(RVA = "0x53A44B0", Offset = "0x53A34B0", VA = "0x53A44B0")]
	internal void AddDependency(long dependentObject)
	{
	}

	[Token(Token = "0x6001FEF")]
	[Address(RVA = "0x53A3990", Offset = "0x53A2990", VA = "0x53A3990")]
	internal void UpdateData(object obj, SerializationInfo info, ISerializationSurrogate surrogate, long idOfContainer, FieldInfo field, int[] arrayIndex, ObjectManager manager)
	{
	}

	[Token(Token = "0x6001FF0")]
	[Address(RVA = "0x53A2D00", Offset = "0x53A1D00", VA = "0x53A2D00")]
	internal void MarkForCompletionWhenAvailable()
	{
	}

	[Token(Token = "0x6001FF1")]
	[Address(RVA = "0x53A1100", Offset = "0x53A0100", VA = "0x53A1100")]
	internal void SetFlags()
	{
	}

	[Token(Token = "0x6002004")]
	[Address(RVA = "0x53A1010", Offset = "0x53A0010", VA = "0x53A1010")]
	internal void SetObjectValue(object obj, ObjectManager manager)
	{
	}
}
