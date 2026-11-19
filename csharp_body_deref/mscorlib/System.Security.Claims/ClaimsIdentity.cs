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
[Token(Token = "0x2000339")]
[ComVisible(true)]
public class ClaimsIdentity : IIdentity
{
	[Token(Token = "0x200033A")]
	[CompilerGenerated]
	private sealed class _003Cget_Claims_003Ed__51 : IEnumerable<Claim>, IEnumerable, IEnumerator<Claim>, IDisposable, IEnumerator
	{
		[Token(Token = "0x4000DCF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000DD0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private Claim _003C_003E2__current;

		[Token(Token = "0x4000DD1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4000DD2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public ClaimsIdentity _003C_003E4__this;

		[Token(Token = "0x4000DD3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private int _003Ci_003E5__2;

		[Token(Token = "0x4000DD4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private IEnumerator<Claim> _003C_003E7__wrap2;

		[Token(Token = "0x17000327")]
		private Claim System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002ESecurity_002EClaims_002EClaim_003E_002ECurrent
		{
			[Token(Token = "0x6001C46")]
			[Address(RVA = "0x5368980", Offset = "0x5367980", VA = "0x5368980", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000328")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6001C48")]
			[Address(RVA = "0x53689D0", Offset = "0x53679D0", VA = "0x53689D0", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001C42")]
		[Address(RVA = "0x53670C0", Offset = "0x53660C0", VA = "0x53670C0")]
		[DebuggerHidden]
		public _003Cget_Claims_003Ed__51(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6001C43")]
		[Address(RVA = "0x5368360", Offset = "0x5367360", VA = "0x5368360", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6001C44")]
		[Address(RVA = "0x5368410", Offset = "0x5367410", VA = "0x5368410", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6001C45")]
		[Address(RVA = "0x53688E0", Offset = "0x53678E0", VA = "0x53688E0")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6001C47")]
		[Address(RVA = "0x5368990", Offset = "0x5367990", VA = "0x5368990", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6001C49")]
		[Address(RVA = "0x53689E0", Offset = "0x53679E0", VA = "0x53689E0", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<Claim> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002ESecurity_002EClaims_002EClaim_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6001C4A")]
		[Address(RVA = "0x5368A80", Offset = "0x5367A80", VA = "0x5368A80", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[NonSerialized]
	[Token(Token = "0x4000DC2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private byte[] m_userSerializationData;

	[NonSerialized]
	[Token(Token = "0x4000DC3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private List<Claim> m_instanceClaims;

	[NonSerialized]
	[Token(Token = "0x4000DC4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Collection<IEnumerable<Claim>> m_externalClaims;

	[NonSerialized]
	[Token(Token = "0x4000DC5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private string m_nameType;

	[NonSerialized]
	[Token(Token = "0x4000DC6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private string m_roleType;

	[Token(Token = "0x4000DC7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	[OptionalField(VersionAdded = 2)]
	private string m_version;

	[Token(Token = "0x4000DC8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	[OptionalField(VersionAdded = 2)]
	private ClaimsIdentity m_actor;

	[Token(Token = "0x4000DC9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	[OptionalField(VersionAdded = 2)]
	private string m_authenticationType;

	[Token(Token = "0x4000DCA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	[OptionalField(VersionAdded = 2)]
	private object m_bootstrapContext;

	[Token(Token = "0x4000DCB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	[OptionalField(VersionAdded = 2)]
	private string m_label;

	[Token(Token = "0x4000DCC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	[OptionalField(VersionAdded = 2)]
	private string m_serializedNameType;

	[Token(Token = "0x4000DCD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	[OptionalField(VersionAdded = 2)]
	private string m_serializedRoleType;

	[Token(Token = "0x4000DCE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	[OptionalField(VersionAdded = 2)]
	private string m_serializedClaims;

	[Token(Token = "0x17000323")]
	public virtual string AuthenticationType
	{
		[Token(Token = "0x6001C31")]
		[Address(RVA = "0x5366F90", Offset = "0x5365F90", VA = "0x5366F90", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000324")]
	public ClaimsIdentity Actor
	{
		[Token(Token = "0x6001C32")]
		[Address(RVA = "0x5366FA0", Offset = "0x5365FA0", VA = "0x5366FA0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001C33")]
		[Address(RVA = "0x5366FB0", Offset = "0x5365FB0", VA = "0x5366FB0")]
		set
		{
		}
	}

	[Token(Token = "0x17000325")]
	public virtual IEnumerable<Claim> Claims
	{
		[Token(Token = "0x6001C34")]
		[Address(RVA = "0x5367050", Offset = "0x5366050", VA = "0x5367050", Slot = "7")]
		[IteratorStateMachine(typeof(_003Cget_Claims_003Ed__51))]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000326")]
	public virtual string Name
	{
		[Token(Token = "0x6001C35")]
		[Address(RVA = "0x53670F0", Offset = "0x53660F0", VA = "0x53670F0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001C2C")]
	[Address(RVA = "0x5364650", Offset = "0x5363650", VA = "0x5364650")]
	public ClaimsIdentity()
	{
	}

	[Token(Token = "0x6001C2D")]
	[Address(RVA = "0x5365910", Offset = "0x5364910", VA = "0x5365910")]
	public ClaimsIdentity(IEnumerable<Claim> claims)
	{
	}

	[Token(Token = "0x6001C2E")]
	[Address(RVA = "0x5365940", Offset = "0x5364940", VA = "0x5365940")]
	public ClaimsIdentity(IIdentity identity, IEnumerable<Claim> claims, string authenticationType, string nameType, string roleType)
	{
	}

	[Token(Token = "0x6001C2F")]
	[Address(RVA = "0x5365960", Offset = "0x5364960", VA = "0x5365960")]
	internal ClaimsIdentity(IIdentity identity, IEnumerable<Claim> claims, string authenticationType, string nameType, string roleType, bool checkAuthType)
	{
	}

	[Token(Token = "0x6001C30")]
	[Address(RVA = "0x5366640", Offset = "0x5365640", VA = "0x5366640")]
	protected ClaimsIdentity(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001C36")]
	[Address(RVA = "0x5367120", Offset = "0x5366120", VA = "0x5367120", Slot = "9")]
	public virtual ClaimsIdentity Clone()
	{
		return null;
	}

	[Token(Token = "0x6001C37")]
	[Address(RVA = "0x5366110", Offset = "0x5365110", VA = "0x5366110")]
	private void SafeAddClaims(IEnumerable<Claim> claims)
	{
	}

	[Token(Token = "0x6001C38")]
	[Address(RVA = "0x5366510", Offset = "0x5365510", VA = "0x5366510")]
	private void SafeAddClaim(Claim claim)
	{
	}

	[Token(Token = "0x6001C39")]
	[Address(RVA = "0x53672C0", Offset = "0x53662C0", VA = "0x53672C0", Slot = "10")]
	public virtual Claim FindFirst(string type)
	{
		return null;
	}

	[Token(Token = "0x6001C3A")]
	[Address(RVA = "0x5367650", Offset = "0x5366650", VA = "0x5367650")]
	[OnSerializing]
	private void OnSerializingMethod(StreamingContext context)
	{
	}

	[Token(Token = "0x6001C3B")]
	[Address(RVA = "0x53678F0", Offset = "0x53668F0", VA = "0x53678F0")]
	[OnDeserialized]
	private void OnDeserializedMethod(StreamingContext context)
	{
	}

	[Token(Token = "0x6001C3C")]
	[Address(RVA = "0x5367D00", Offset = "0x5366D00", VA = "0x5367D00")]
	[OnDeserializing]
	private void OnDeserializingMethod(StreamingContext context)
	{
	}

	[Token(Token = "0x6001C3D")]
	[Address(RVA = "0x5367DF0", Offset = "0x5366DF0", VA = "0x5367DF0", Slot = "11")]
	protected virtual void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001C3E")]
	[Address(RVA = "0x53679E0", Offset = "0x53669E0", VA = "0x53679E0")]
	private void DeserializeClaims(string serializedClaims)
	{
	}

	[Token(Token = "0x6001C3F")]
	[Address(RVA = "0x53676D0", Offset = "0x53666D0", VA = "0x53676D0")]
	private string SerializeClaims()
	{
		return null;
	}

	[Token(Token = "0x6001C40")]
	[Address(RVA = "0x53660D0", Offset = "0x53650D0", VA = "0x53660D0")]
	private bool IsCircular(ClaimsIdentity subject)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C41")]
	[Address(RVA = "0x53667E0", Offset = "0x53657E0", VA = "0x53667E0")]
	private void Deserialize(SerializationInfo info, StreamingContext context, bool useContext)
	{
	}
}
