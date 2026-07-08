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
[Token(Token = "0x2000331")]
[ComVisible(true)]
public class ClaimsIdentity : IIdentity
{
	[Token(Token = "0x2000332")]
	[CompilerGenerated]
	private sealed class _003Cget_Claims_003Ed__51 : IEnumerable<Claim>, IEnumerable, IEnumerator<Claim>, IDisposable, IEnumerator
	{
		[Token(Token = "0x4000E62")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000E63")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private Claim _003C_003E2__current;

		[Token(Token = "0x4000E64")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4000E65")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public ClaimsIdentity _003C_003E4__this;

		[Token(Token = "0x4000E66")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private int _003Ci_003E5__2;

		[Token(Token = "0x4000E67")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private IEnumerator<Claim> _003C_003E7__wrap2;

		[Token(Token = "0x17000326")]
		private Claim System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002ESecurity_002EClaims_002EClaim_003E_002ECurrent
		{
			[Token(Token = "0x6001C01")]
			[Address(RVA = "0x4E79670", Offset = "0x4E79670", VA = "0x4E79670", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000327")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6001C03")]
			[Address(RVA = "0x4E796C0", Offset = "0x4E796C0", VA = "0x4E796C0", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001BFD")]
		[Address(RVA = "0x4E77AB0", Offset = "0x4E77AB0", VA = "0x4E77AB0")]
		[DebuggerHidden]
		public _003Cget_Claims_003Ed__51(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6001BFE")]
		[Address(RVA = "0x4E78F60", Offset = "0x4E78F60", VA = "0x4E78F60", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6001BFF")]
		[Address(RVA = "0x4E79010", Offset = "0x4E79010", VA = "0x4E79010", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6001C00")]
		[Address(RVA = "0x4E795D0", Offset = "0x4E795D0", VA = "0x4E795D0")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6001C02")]
		[Address(RVA = "0x4E79680", Offset = "0x4E79680", VA = "0x4E79680", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6001C04")]
		[Address(RVA = "0x4E796D0", Offset = "0x4E796D0", VA = "0x4E796D0", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<Claim> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002ESecurity_002EClaims_002EClaim_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6001C05")]
		[Address(RVA = "0x4E79770", Offset = "0x4E79770", VA = "0x4E79770", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[NonSerialized]
	[Token(Token = "0x4000E55")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private byte[] m_userSerializationData;

	[NonSerialized]
	[Token(Token = "0x4000E56")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private List<Claim> m_instanceClaims;

	[NonSerialized]
	[Token(Token = "0x4000E57")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Collection<IEnumerable<Claim>> m_externalClaims;

	[NonSerialized]
	[Token(Token = "0x4000E58")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private string m_nameType;

	[NonSerialized]
	[Token(Token = "0x4000E59")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private string m_roleType;

	[Token(Token = "0x4000E5A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	[OptionalField(VersionAdded = 2)]
	private string m_version;

	[Token(Token = "0x4000E5B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	[OptionalField(VersionAdded = 2)]
	private ClaimsIdentity m_actor;

	[Token(Token = "0x4000E5C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	[OptionalField(VersionAdded = 2)]
	private string m_authenticationType;

	[Token(Token = "0x4000E5D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	[OptionalField(VersionAdded = 2)]
	private object m_bootstrapContext;

	[Token(Token = "0x4000E5E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	[OptionalField(VersionAdded = 2)]
	private string m_label;

	[Token(Token = "0x4000E5F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	[OptionalField(VersionAdded = 2)]
	private string m_serializedNameType;

	[Token(Token = "0x4000E60")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	[OptionalField(VersionAdded = 2)]
	private string m_serializedRoleType;

	[Token(Token = "0x4000E61")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	[OptionalField(VersionAdded = 2)]
	private string m_serializedClaims;

	[Token(Token = "0x17000322")]
	public virtual string AuthenticationType
	{
		[Token(Token = "0x6001BEC")]
		[Address(RVA = "0x4E77970", Offset = "0x4E77970", VA = "0x4E77970", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000323")]
	public ClaimsIdentity Actor
	{
		[Token(Token = "0x6001BED")]
		[Address(RVA = "0x4E77980", Offset = "0x4E77980", VA = "0x4E77980")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001BEE")]
		[Address(RVA = "0x4E77990", Offset = "0x4E77990", VA = "0x4E77990")]
		set
		{
		}
	}

	[Token(Token = "0x17000324")]
	public virtual IEnumerable<Claim> Claims
	{
		[Token(Token = "0x6001BEF")]
		[Address(RVA = "0x4E77A30", Offset = "0x4E77A30", VA = "0x4E77A30", Slot = "7")]
		[IteratorStateMachine(typeof(_003Cget_Claims_003Ed__51))]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000325")]
	public virtual string Name
	{
		[Token(Token = "0x6001BF0")]
		[Address(RVA = "0x4E77AE0", Offset = "0x4E77AE0", VA = "0x4E77AE0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001BE7")]
	[Address(RVA = "0x4E74EA0", Offset = "0x4E74EA0", VA = "0x4E74EA0")]
	public ClaimsIdentity()
	{
	}

	[Token(Token = "0x6001BE8")]
	[Address(RVA = "0x4E761D0", Offset = "0x4E761D0", VA = "0x4E761D0")]
	public ClaimsIdentity(IEnumerable<Claim> claims)
	{
	}

	[Token(Token = "0x6001BE9")]
	[Address(RVA = "0x4E76200", Offset = "0x4E76200", VA = "0x4E76200")]
	public ClaimsIdentity(IIdentity identity, IEnumerable<Claim> claims, string authenticationType, string nameType, string roleType)
	{
	}

	[Token(Token = "0x6001BEA")]
	[Address(RVA = "0x4E76220", Offset = "0x4E76220", VA = "0x4E76220")]
	internal ClaimsIdentity(IIdentity identity, IEnumerable<Claim> claims, string authenticationType, string nameType, string roleType, bool checkAuthType)
	{
	}

	[Token(Token = "0x6001BEB")]
	[Address(RVA = "0x4E76F50", Offset = "0x4E76F50", VA = "0x4E76F50")]
	protected ClaimsIdentity(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001BF1")]
	[Address(RVA = "0x4E77B10", Offset = "0x4E77B10", VA = "0x4E77B10", Slot = "9")]
	public virtual ClaimsIdentity Clone()
	{
		return null;
	}

	[Token(Token = "0x6001BF2")]
	[Address(RVA = "0x4E769B0", Offset = "0x4E769B0", VA = "0x4E769B0")]
	private void SafeAddClaims(IEnumerable<Claim> claims)
	{
	}

	[Token(Token = "0x6001BF3")]
	[Address(RVA = "0x4E76E20", Offset = "0x4E76E20", VA = "0x4E76E20")]
	private void SafeAddClaim(Claim claim)
	{
	}

	[Token(Token = "0x6001BF4")]
	[Address(RVA = "0x4E77CA0", Offset = "0x4E77CA0", VA = "0x4E77CA0", Slot = "10")]
	public virtual Claim FindFirst(string type)
	{
		return null;
	}

	[Token(Token = "0x6001BF5")]
	[Address(RVA = "0x4E78070", Offset = "0x4E78070", VA = "0x4E78070")]
	[OnSerializing]
	private void OnSerializingMethod(StreamingContext context)
	{
	}

	[Token(Token = "0x6001BF6")]
	[Address(RVA = "0x4E78380", Offset = "0x4E78380", VA = "0x4E78380")]
	[OnDeserialized]
	private void OnDeserializedMethod(StreamingContext context)
	{
	}

	[Token(Token = "0x6001BF7")]
	[Address(RVA = "0x4E78830", Offset = "0x4E78830", VA = "0x4E78830")]
	[OnDeserializing]
	private void OnDeserializingMethod(StreamingContext context)
	{
	}

	[Token(Token = "0x6001BF8")]
	[Address(RVA = "0x4E78920", Offset = "0x4E78920", VA = "0x4E78920", Slot = "11")]
	protected virtual void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001BF9")]
	[Address(RVA = "0x4E78470", Offset = "0x4E78470", VA = "0x4E78470")]
	private void DeserializeClaims(string serializedClaims)
	{
	}

	[Token(Token = "0x6001BFA")]
	[Address(RVA = "0x4E780F0", Offset = "0x4E780F0", VA = "0x4E780F0")]
	private string SerializeClaims()
	{
		return null;
	}

	[Token(Token = "0x6001BFB")]
	[Address(RVA = "0x4E76980", Offset = "0x4E76980", VA = "0x4E76980")]
	private bool IsCircular(ClaimsIdentity subject)
	{
		return default(bool);
	}

	[Token(Token = "0x6001BFC")]
	[Address(RVA = "0x4E770F0", Offset = "0x4E770F0", VA = "0x4E770F0")]
	private void Deserialize(SerializationInfo info, StreamingContext context, bool useContext)
	{
	}
}
