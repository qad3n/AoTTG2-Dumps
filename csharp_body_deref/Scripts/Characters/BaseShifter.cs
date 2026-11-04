// ==================== AoTTG2 cross-reference ====================
// Type: Characters.BaseShifter
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Characters/BaseShifter.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Shifters/BaseShifter.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using CustomSkins;
using Il2CppDummyDll;
using Photon.Pun;
using Settings;
using SimpleJSONFixed;
using UnityEngine;

namespace Characters;

[Token(Token = "0x2000697")]
internal class BaseShifter : BaseTitan
{
	[Token(Token = "0x2000698")]
	[CompilerGenerated]
	private sealed class _003CWaitAndBecomeHuman_003Ed__42 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001F25")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001F26")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001F27")]
		[FieldOffset(Offset = "0x20")]
		public float time;

		[Token(Token = "0x4001F28")]
		[FieldOffset(Offset = "0x28")]
		public BaseShifter _003C_003E4__this;

		[Token(Token = "0x17000B55")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60040D2")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000B56")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60040D4")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60040CF")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CWaitAndBecomeHuman_003Ed__42(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60040D0")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60040D1")]
		[Address(RVA = "0x2179370", Offset = "0x2177970", VA = "0x182179370", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60040D3")]
		[Address(RVA = "0x2179700", Offset = "0x2177D00", VA = "0x182179700", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000699")]
	[CompilerGenerated]
	private sealed class _003CWaitAndDie_003Ed__43 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001F29")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001F2A")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001F2B")]
		[FieldOffset(Offset = "0x20")]
		public BaseShifter _003C_003E4__this;

		[Token(Token = "0x17000B57")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60040D8")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000B58")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60040DA")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60040D5")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CWaitAndDie_003Ed__43(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60040D6")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60040D7")]
		[Address(RVA = "0x2179740", Offset = "0x2177D40", VA = "0x182179740", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60040D9")]
		[Address(RVA = "0x2179B00", Offset = "0x2178100", VA = "0x182179B00", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001F1B")]
	[FieldOffset(Offset = "0x288")]
	protected bool _needRoar;

	[Token(Token = "0x4001F1C")]
	[FieldOffset(Offset = "0x289")]
	public bool TransformingToHuman;

	[Token(Token = "0x4001F1D")]
	[FieldOffset(Offset = "0x28C")]
	public float PreviousHumanGas;

	[Token(Token = "0x4001F1E")]
	[FieldOffset(Offset = "0x290")]
	public BaseUseable PreviousHumanWeapon;

	[Token(Token = "0x4001F1F")]
	[FieldOffset(Offset = "0x298")]
	public float DeathAnimationLength;

	[Token(Token = "0x4001F20")]
	[FieldOffset(Offset = "0x2A0")]
	protected BaseCustomSkinLoader _customSkinLoader;

	[Token(Token = "0x4001F21")]
	[FieldOffset(Offset = "0x2A8")]
	private bool _forceEmote;

	[Token(Token = "0x4001F22")]
	[FieldOffset(Offset = "0x2AC")]
	private float _liveTime;

	[Token(Token = "0x4001F23")]
	[FieldOffset(Offset = "0x2B0")]
	private float _liveTimeEnd;

	[Token(Token = "0x17000B48")]
	protected override int DefaultMaxHealth
	{
		[Token(Token = "0x60040AF")]
		[Address(RVA = "0x2168BB0", Offset = "0x21671B0", VA = "0x182168BB0", Slot = "57")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000B49")]
	protected override float DefaultRunSpeed
	{
		[Token(Token = "0x60040B0")]
		[Address(RVA = "0x1DA8AF0", Offset = "0x1DA70F0", VA = "0x181DA8AF0", Slot = "130")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B4A")]
	protected override float DefaultWalkSpeed
	{
		[Token(Token = "0x60040B1")]
		[Address(RVA = "0x2168BC0", Offset = "0x21671C0", VA = "0x182168BC0", Slot = "131")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B4B")]
	protected override float DefaultRotateSpeed
	{
		[Token(Token = "0x60040B2")]
		[Address(RVA = "0x20B9980", Offset = "0x20B7F80", VA = "0x1820B9980", Slot = "133")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B4C")]
	protected override float DefaultJumpForce
	{
		[Token(Token = "0x60040B3")]
		[Address(RVA = "0x210FBA0", Offset = "0x210E1A0", VA = "0x18210FBA0", Slot = "132")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B4D")]
	protected override float SizeMultiplier
	{
		[Token(Token = "0x60040B4")]
		[Address(RVA = "0x2161410", Offset = "0x215FA10", VA = "0x182161410", Slot = "134")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B4E")]
	public override float DefaultCrippleTime
	{
		[Token(Token = "0x60040B5")]
		[Address(RVA = "0x2168BA0", Offset = "0x21671A0", VA = "0x182168BA0", Slot = "121")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B4F")]
	public override float LaunchForce
	{
		[Token(Token = "0x60040B6")]
		[Address(RVA = "0x2168BD0", Offset = "0x21671D0", VA = "0x182168BD0", Slot = "126")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B50")]
	public override float LaunchTime
	{
		[Token(Token = "0x60040B7")]
		[Address(RVA = "0x2168BF0", Offset = "0x21671F0", VA = "0x182168BF0", Slot = "127")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B51")]
	protected override float DisableCooldown
	{
		[Token(Token = "0x60040B8")]
		[Address(RVA = "0x18B56E0", Offset = "0x18B3CE0", VA = "0x1818B56E0", Slot = "135")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B52")]
	public string SpecialIcon
	{
		[Token(Token = "0x60040B9")]
		[Address(RVA = "0x2168CD0", Offset = "0x21672D0", VA = "0x182168CD0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60040BA")]
		[Address(RVA = "0x2168CE0", Offset = "0x21672E0", VA = "0x182168CE0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000B53")]
	public float LiveTimeRatio
	{
		[Token(Token = "0x60040BB")]
		[Address(RVA = "0x2168C10", Offset = "0x2167210", VA = "0x182168C10")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B54")]
	protected override string MeleeHitType
	{
		[Token(Token = "0x60040BE")]
		[Address(RVA = "0x2168CA0", Offset = "0x21672A0", VA = "0x182168CA0", Slot = "141")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60040BC")]
	[Address(RVA = "0x2168640", Offset = "0x2166C40", VA = "0x182168640", Slot = "104")]
	protected override void Start()
	{
	}

	[Token(Token = "0x60040BD")]
	[Address(RVA = "0x2167BB0", Offset = "0x21661B0", VA = "0x182167BB0", Slot = "153")]
	public override void Kick()
	{
	}

	[Token(Token = "0x60040BF")]
	[Address(RVA = "0x2167290", Offset = "0x2165890", VA = "0x182167290", Slot = "144")]
	protected override string GetFinisherReaction(bool kick, bool smallVictim, bool headHit)
	{
		return null;
	}

	[Token(Token = "0x60040C0")]
	[Address(RVA = "0x2168280", Offset = "0x2166880", VA = "0x182168280")]
	[PunRPC]
	public void MarkTransformingRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60040C1")]
	[Address(RVA = "0x21678D0", Offset = "0x2165ED0", VA = "0x1821678D0", Slot = "203")]
	public virtual void Init(bool ai, string team, JSONNode data, float liveTime)
	{
	}

	[Token(Token = "0x60040C2")]
	[Address(RVA = "0x2168AB0", Offset = "0x21670B0", VA = "0x182168AB0")]
	[IteratorStateMachine(typeof(_003CWaitAndBecomeHuman_003Ed__42))]
	protected IEnumerator WaitAndBecomeHuman(float time)
	{
		return null;
	}

	[Token(Token = "0x60040C3")]
	[Address(RVA = "0x2168B30", Offset = "0x2167130", VA = "0x182168B30", Slot = "84")]
	[IteratorStateMachine(typeof(_003CWaitAndDie_003Ed__43))]
	protected override IEnumerator WaitAndDie()
	{
		return null;
	}

	[Token(Token = "0x60040C4")]
	[Address(RVA = "0x2167230", Offset = "0x2165830", VA = "0x182167230", Slot = "101")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x60040C5")]
	[Address(RVA = "0x2167330", Offset = "0x2165930", VA = "0x182167330", Slot = "90")]
	[PunRPC]
	public override void GetHitRPC(int viewId, string name, int damage, string type, string collider)
	{
	}

	[Token(Token = "0x60040C6")]
	[Address(RVA = "0x21682C0", Offset = "0x21668C0", VA = "0x1821682C0", Slot = "89")]
	public override void OnHit(BaseHitbox hitbox, object victim, Collider collider, string type, bool firstHit)
	{
	}

	[Token(Token = "0x60040C7")]
	[Address(RVA = "0x2168A10", Offset = "0x2167010", VA = "0x182168A10", Slot = "184")]
	protected override void Update()
	{
	}

	[Token(Token = "0x60040C8")]
	[Address(RVA = "0x2167270", Offset = "0x2165870", VA = "0x182167270", Slot = "146")]
	public override bool CanEmote()
	{
		return default(bool);
	}

	[Token(Token = "0x60040C9")]
	[Address(RVA = "0x2167C00", Offset = "0x2166200", VA = "0x182167C00", Slot = "165")]
	public override void Land()
	{
	}

	[Token(Token = "0x60040CA")]
	[Address(RVA = "0x2168090", Offset = "0x2166690", VA = "0x182168090")]
	protected void LoadSkin()
	{
	}

	[Token(Token = "0x60040CB")]
	[Address(RVA = "0x21678A0", Offset = "0x2165EA0", VA = "0x1821678A0", Slot = "204")]
	protected virtual string GetSkinURL(ShifterCustomSkinSet set)
	{
		return null;
	}

	[Token(Token = "0x60040CC")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "205")]
	protected virtual BaseCustomSkinLoader CreateCustomSkinLoader()
	{
		return null;
	}

	[Token(Token = "0x60040CD")]
	[Address(RVA = "0x2167EB0", Offset = "0x21664B0", VA = "0x182167EB0")]
	[PunRPC]
	public void LoadSkinRPC(string url, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60040CE")]
	[Address(RVA = "0x21662A0", Offset = "0x21648A0", VA = "0x1821662A0")]
	public BaseShifter()
	{
	}
}
