// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicNetworkViewBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicNetworkViewBuiltin.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicNetworkViewBuiltin.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Map;
using Photon.Pun;

namespace CustomLogic;

[Token(Token = "0x2000317")]
[CompilerGenerated]
internal class CustomLogicNetworkViewBuiltin : BuiltinClassInstance
{
	[Token(Token = "0x2000318")]
	public static class Factory
	{
		[Token(Token = "0x60018C8")]
		[Address(RVA = "0x4027700", Offset = "0x4027700", VA = "0x4027700")]
		public static CustomLogicNetworkViewBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x2000319")]
	public static class Bindings
	{
		[Token(Token = "0x4000F95")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x60018C9")]
		[Address(RVA = "0x4027830", Offset = "0x4027830", VA = "0x4027830")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x60018CA")]
		[Address(RVA = "0x4027C20", Offset = "0x4027C20", VA = "0x4027C20")]
		public static CLPropertyBinding<CustomLogicNetworkViewBuiltin> __CreatePropertyBinding__SyncTransforms()
		{
			return null;
		}

		[Token(Token = "0x60018CB")]
		[Address(RVA = "0x4027D00", Offset = "0x4027D00", VA = "0x4027D00")]
		public static CLPropertyBinding<CustomLogicNetworkViewBuiltin> __CreatePropertyBinding__Owner()
		{
			return null;
		}

		[Token(Token = "0x60018CC")]
		[Address(RVA = "0x4027DA0", Offset = "0x4027DA0", VA = "0x4027DA0")]
		public static CLMethodBinding<CustomLogicNetworkViewBuiltin> __CreateMethodBinding__Transfer()
		{
			return null;
		}

		[Token(Token = "0x60018CD")]
		[Address(RVA = "0x4027EF0", Offset = "0x4027EF0", VA = "0x4027EF0")]
		public static CLMethodBinding<CustomLogicNetworkViewBuiltin> __CreateMethodBinding__SendMessage()
		{
			return null;
		}

		[Token(Token = "0x60018CE")]
		[Address(RVA = "0x4028040", Offset = "0x4028040", VA = "0x4028040")]
		public static CLMethodBinding<CustomLogicNetworkViewBuiltin> __CreateMethodBinding__SendMessageAll()
		{
			return null;
		}

		[Token(Token = "0x60018CF")]
		[Address(RVA = "0x4028190", Offset = "0x4028190", VA = "0x4028190")]
		public static CLMethodBinding<CustomLogicNetworkViewBuiltin> __CreateMethodBinding__SendMessageOthers()
		{
			return null;
		}

		[Token(Token = "0x60018D0")]
		[Address(RVA = "0x40282E0", Offset = "0x40282E0", VA = "0x40282E0")]
		public static CLMethodBinding<CustomLogicNetworkViewBuiltin> __CreateMethodBinding__SendStream()
		{
			return null;
		}

		[Token(Token = "0x60018D1")]
		[Address(RVA = "0x4028430", Offset = "0x4028430", VA = "0x4028430")]
		public static CLMethodBinding<CustomLogicNetworkViewBuiltin> __CreateMethodBinding__ReceiveStream()
		{
			return null;
		}
	}

	[Token(Token = "0x4000F8E")]
	[FieldOffset(Offset = "0x30")]
	public readonly MapObject MapObject;

	[Token(Token = "0x4000F8F")]
	[FieldOffset(Offset = "0x38")]
	public CustomLogicPhotonSync Sync;

	[Token(Token = "0x4000F90")]
	[FieldOffset(Offset = "0x40")]
	public int OwnerId;

	[Token(Token = "0x4000F91")]
	[FieldOffset(Offset = "0x48")]
	private List<object> _streamObjects;

	[Token(Token = "0x4000F92")]
	[FieldOffset(Offset = "0x50")]
	private readonly List<CustomLogicComponentInstance> _classInstances;

	[Token(Token = "0x4000F93")]
	[FieldOffset(Offset = "0x58")]
	private readonly List<CustomLogicClassInstance> _addonInstances;

	[Token(Token = "0x4000F94")]
	[FieldOffset(Offset = "0x60")]
	private bool _isTransformSynced;

	[Token(Token = "0x17000356")]
	public bool SyncTransforms
	{
		[Token(Token = "0x60018B0")]
		[Address(RVA = "0x40254F0", Offset = "0x40254F0", VA = "0x40254F0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60018B1")]
		[Address(RVA = "0x4025500", Offset = "0x4025500", VA = "0x4025500")]
		set
		{
		}
	}

	[Token(Token = "0x17000357")]
	public CustomLogicPlayerBuiltin Owner
	{
		[Token(Token = "0x60018B2")]
		[Address(RVA = "0x4025580", Offset = "0x4025580", VA = "0x4025580")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000358")]
	public override string ClassName
	{
		[Token(Token = "0x60018C4")]
		[Address(RVA = "0x40276A0", Offset = "0x40276A0", VA = "0x40276A0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000359")]
	public override bool IsAbstract
	{
		[Token(Token = "0x60018C5")]
		[Address(RVA = "0x40276D0", Offset = "0x40276D0", VA = "0x40276D0", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700035A")]
	public override bool IsStatic
	{
		[Token(Token = "0x60018C6")]
		[Address(RVA = "0x40276E0", Offset = "0x40276E0", VA = "0x40276E0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700035B")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x60018C7")]
		[Address(RVA = "0x40276F0", Offset = "0x40276F0", VA = "0x40276F0", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60018AF")]
	[Address(RVA = "0x40253E0", Offset = "0x40253E0", VA = "0x40253E0")]
	public CustomLogicNetworkViewBuiltin(MapObject obj)
	{
	}

	[Token(Token = "0x60018B3")]
	[Address(RVA = "0x40256E0", Offset = "0x40256E0", VA = "0x40256E0")]
	public void OnSecond()
	{
	}

	[Token(Token = "0x60018B4")]
	[Address(RVA = "0x4025740", Offset = "0x4025740", VA = "0x4025740")]
	public void RegisterComponentInstance(CustomLogicComponentInstance instance)
	{
	}

	[Token(Token = "0x60018B5")]
	[Address(RVA = "0x40257E0", Offset = "0x40257E0", VA = "0x40257E0")]
	public void RegisterAddonInstance(CustomLogicClassInstance instance)
	{
	}

	[Token(Token = "0x60018B6")]
	[Address(RVA = "0x40258B0", Offset = "0x40258B0", VA = "0x40258B0")]
	public void OnNetworkTransfer(CustomLogicPlayerBuiltin oldOwner, CustomLogicPlayerBuiltin newOwner)
	{
	}

	[Token(Token = "0x60018B7")]
	[Address(RVA = "0x4025C70", Offset = "0x4025C70", VA = "0x4025C70")]
	public void SetSyncDynamic(CustomLogicPhotonSync sync)
	{
	}

	[Token(Token = "0x60018B8")]
	[Address(RVA = "0x4025D50", Offset = "0x4025D50", VA = "0x4025D50")]
	public void SetSync(CustomLogicPhotonSync sync)
	{
	}

	[Token(Token = "0x60018B9")]
	[Address(RVA = "0x4026310", Offset = "0x4026310", VA = "0x4026310")]
	public void SendNetworkStream(PhotonStream stream)
	{
	}

	[Token(Token = "0x60018BA")]
	[Address(RVA = "0x4026510", Offset = "0x4026510", VA = "0x4026510")]
	public void OnNetworkStream(object[] objs)
	{
	}

	[Token(Token = "0x60018BB")]
	[Address(RVA = "0x4026710", Offset = "0x4026710", VA = "0x4026710")]
	public void OnNetworkMessage(CustomLogicPlayerBuiltin player, string message, double sentServerTime)
	{
	}

	[Token(Token = "0x60018BC")]
	[Address(RVA = "0x40272C0", Offset = "0x40272C0", VA = "0x40272C0")]
	public void Transfer(CustomLogicPlayerBuiltin player)
	{
	}

	[Token(Token = "0x60018BD")]
	[Address(RVA = "0x4027310", Offset = "0x4027310", VA = "0x4027310")]
	public void SendMessage(CustomLogicPlayerBuiltin target, string msg)
	{
	}

	[Token(Token = "0x60018BE")]
	[Address(RVA = "0x4027330", Offset = "0x4027330", VA = "0x4027330")]
	public void SendMessageAll(string msg)
	{
	}

	[Token(Token = "0x60018BF")]
	[Address(RVA = "0x4027350", Offset = "0x4027350", VA = "0x4027350")]
	public void SendMessageOthers(string msg)
	{
	}

	[Token(Token = "0x60018C0")]
	[Address(RVA = "0x4027370", Offset = "0x4027370", VA = "0x4027370")]
	public void SendStream(object obj)
	{
	}

	[Token(Token = "0x60018C1")]
	[Address(RVA = "0x4027500", Offset = "0x4027500", VA = "0x4027500")]
	public object ReceiveStream()
	{
		return null;
	}

	[Token(Token = "0x60018C2")]
	[Address(RVA = "0x4027410", Offset = "0x4027410", VA = "0x4027410")]
	private static object SerializeStreamObj(object obj)
	{
		return null;
	}

	[Token(Token = "0x60018C3")]
	[Address(RVA = "0x4027580", Offset = "0x4027580", VA = "0x4027580")]
	private static object DeserializeStreamObj(object obj)
	{
		return null;
	}
}
