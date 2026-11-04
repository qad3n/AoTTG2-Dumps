// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Claims.ClaimsIdentity
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using System.Security.Principal;
using Il2CppDummyDll;

namespace System.Security.Claims;

[Serializable]
[Token(Token = "0x2000360")]
[ComVisible(true)]
public class ClaimsIdentity : IIdentity
{
	[Token(Token = "0x2000361")]
	[CompilerGenerated]
	private sealed class _003Cget_Claims_003Ed__51 : IEnumerable<Claim>, IEnumerable, IEnumerator<Claim>, IDisposable, IEnumerator
	{
		[Token(Token = "0x4000E6F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000E70")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private Claim _003C_003E2__current;

		[Token(Token = "0x4000E71")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4000E72")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public ClaimsIdentity _003C_003E4__this;

		[Token(Token = "0x4000E73")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private int _003Ci_003E5__2;

		[Token(Token = "0x4000E74")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private IEnumerator<Claim> _003C_003E7__wrap2;

		[Token(Token = "0x17000328")]
		private Claim System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002ESecurity_002EClaims_002EClaim_003E_002ECurrent
		{
			[Token(Token = "0x6001C6F")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000329")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6001C71")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001C6B")]
		[Address(RVA = "0x8E2870", Offset = "0x8E0E70", VA = "0x1808E2870")]
		[DebuggerHidden]
		public _003Cget_Claims_003Ed__51(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6001C6C")]
		[Address(RVA = "0x19E8B60", Offset = "0x19E7160", VA = "0x1819E8B60", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6001C6D")]
		[Address(RVA = "0x19E8720", Offset = "0x19E6D20", VA = "0x1819E8720", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6001C6E")]
		[Address(RVA = "0x19E8BF0", Offset = "0x19E71F0", VA = "0x1819E8BF0")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6001C70")]
		[Address(RVA = "0x19E8B20", Offset = "0x19E7120", VA = "0x1819E8B20", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6001C72")]
		[Address(RVA = "0x19E8A80", Offset = "0x19E7080", VA = "0x1819E8A80", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<Claim> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002ESecurity_002EClaims_002EClaim_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6001C73")]
		[Address(RVA = "0x19E8A80", Offset = "0x19E7080", VA = "0x1819E8A80", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[NonSerialized]
	[Token(Token = "0x4000E62")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private byte[] m_userSerializationData;

	[NonSerialized]
	[Token(Token = "0x4000E63")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private List<Claim> m_instanceClaims;

	[NonSerialized]
	[Token(Token = "0x4000E64")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Collection<IEnumerable<Claim>> m_externalClaims;

	[NonSerialized]
	[Token(Token = "0x4000E65")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private string m_nameType;

	[NonSerialized]
	[Token(Token = "0x4000E66")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private string m_roleType;

	[Token(Token = "0x4000E67")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	[OptionalField(VersionAdded = 2)]
	private string m_version;

	[Token(Token = "0x4000E68")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	[OptionalField(VersionAdded = 2)]
	private ClaimsIdentity m_actor;

	[Token(Token = "0x4000E69")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	[OptionalField(VersionAdded = 2)]
	private string m_authenticationType;

	[Token(Token = "0x4000E6A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	[OptionalField(VersionAdded = 2)]
	private object m_bootstrapContext;

	[Token(Token = "0x4000E6B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	[OptionalField(VersionAdded = 2)]
	private string m_label;

	[Token(Token = "0x4000E6C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	[OptionalField(VersionAdded = 2)]
	private string m_serializedNameType;

	[Token(Token = "0x4000E6D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	[OptionalField(VersionAdded = 2)]
	private string m_serializedRoleType;

	[Token(Token = "0x4000E6E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	[OptionalField(VersionAdded = 2)]
	private string m_serializedClaims;

	[Token(Token = "0x17000324")]
	public virtual string AuthenticationType
	{
		[Token(Token = "0x6001C5A")]
		[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000325")]
	public ClaimsIdentity Actor
	{
		[Token(Token = "0x6001C5B")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001C5C")]
		[Address(RVA = "0x19D5E50", Offset = "0x19D4450", VA = "0x1819D5E50")]
		set
		{
		}
	}

	[Token(Token = "0x17000326")]
	public virtual IEnumerable<Claim> Claims
	{
		[Token(Token = "0x6001C5D")]
		[Address(RVA = "0x19D5DA0", Offset = "0x19D43A0", VA = "0x1819D5DA0", Slot = "7")]
		[IteratorStateMachine(typeof(_003Cget_Claims_003Ed__51))]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000327")]
	public virtual string Name
	{
		[Token(Token = "0x6001C5E")]
		[Address(RVA = "0x19D5E20", Offset = "0x19D4420", VA = "0x1819D5E20", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001C55")]
	[Address(RVA = "0x19D5550", Offset = "0x19D3B50", VA = "0x1819D5550")]
	public ClaimsIdentity()
	{
	}

	[Token(Token = "0x6001C56")]
	[Address(RVA = "0x19D5520", Offset = "0x19D3B20", VA = "0x1819D5520")]
	public ClaimsIdentity(IEnumerable<Claim> claims)
	{
	}

	[Token(Token = "0x6001C57")]
	[Address(RVA = "0x19D5D70", Offset = "0x19D4370", VA = "0x1819D5D70")]
	public ClaimsIdentity(IIdentity identity, IEnumerable<Claim> claims, string authenticationType, string nameType, string roleType)
	{
	}

	[Token(Token = "0x6001C58")]
	[Address(RVA = "0x19D5730", Offset = "0x19D3D30", VA = "0x1819D5730")]
	internal ClaimsIdentity(IIdentity identity, IEnumerable<Claim> claims, string authenticationType, string nameType, string roleType, bool checkAuthType)
	{
	}

	[Token(Token = "0x6001C59")]
	[Address(RVA = "0x19D5580", Offset = "0x19D3B80", VA = "0x1819D5580")]
	protected ClaimsIdentity(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001C5F")]
	[Address(RVA = "0x19D3C90", Offset = "0x19D2290", VA = "0x1819D3C90", Slot = "9")]
	public virtual ClaimsIdentity Clone()
	{
		return null;
	}

	[Token(Token = "0x6001C60")]
	[Address(RVA = "0x19D5170", Offset = "0x19D3770", VA = "0x1819D5170")]
	private void SafeAddClaims(IEnumerable<Claim> claims)
	{
	}

	[Token(Token = "0x6001C61")]
	[Address(RVA = "0x19D50D0", Offset = "0x19D36D0", VA = "0x1819D50D0")]
	private void SafeAddClaim(Claim claim)
	{
	}

	[Token(Token = "0x6001C62")]
	[Address(RVA = "0x19D47D0", Offset = "0x19D2DD0", VA = "0x1819D47D0", Slot = "10")]
	public virtual Claim FindFirst(string type)
	{
		return null;
	}

	[Token(Token = "0x6001C63")]
	[Address(RVA = "0x19D5050", Offset = "0x19D3650", VA = "0x1819D5050")]
	[OnSerializing]
	private void OnSerializingMethod(StreamingContext context)
	{
	}

	[Token(Token = "0x6001C64")]
	[Address(RVA = "0x19D4E90", Offset = "0x19D3490", VA = "0x1819D4E90")]
	[OnDeserialized]
	private void OnDeserializedMethod(StreamingContext context)
	{
	}

	[Token(Token = "0x6001C65")]
	[Address(RVA = "0x19D4F70", Offset = "0x19D3570", VA = "0x1819D4F70")]
	[OnDeserializing]
	private void OnDeserializingMethod(StreamingContext context)
	{
	}

	[Token(Token = "0x6001C66")]
	[Address(RVA = "0x19D49C0", Offset = "0x19D2FC0", VA = "0x1819D49C0", Slot = "11")]
	protected virtual void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001C67")]
	[Address(RVA = "0x19D3E60", Offset = "0x19D2460", VA = "0x1819D3E60")]
	private void DeserializeClaims(string serializedClaims)
	{
	}

	[Token(Token = "0x6001C68")]
	[Address(RVA = "0x19D5370", Offset = "0x19D3970", VA = "0x1819D5370")]
	private string SerializeClaims()
	{
		return null;
	}

	[Token(Token = "0x6001C69")]
	[Address(RVA = "0x19D4E40", Offset = "0x19D3440", VA = "0x1819D4E40")]
	private bool IsCircular(ClaimsIdentity subject)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C6A")]
	[Address(RVA = "0x19D4120", Offset = "0x19D2720", VA = "0x1819D4120")]
	private void Deserialize(SerializationInfo info, StreamingContext context, bool useContext)
	{
	}
}
