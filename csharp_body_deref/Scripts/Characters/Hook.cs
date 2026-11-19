// ==================== AoTTG2 cross-reference ====================
// Type: Characters.Hook
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Characters/Hook.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Hook.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Photon.Pun;
using UnityEngine;

namespace Characters;

[Token(Token = "0x20006AA")]
internal class Hook : MonoBehaviour
{
	[Token(Token = "0x4001E09")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly RaycastHit[] _raycastHits;

	[Token(Token = "0x4001E0A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public HookState State;

	[Token(Token = "0x4001E0B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public Transform Anchor;

	[Token(Token = "0x4001E0C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public BaseCharacter HookCharacter;

	[Token(Token = "0x4001E0D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public Transform HookParent;

	[Token(Token = "0x4001E0E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	protected bool _hasHookParent;

	[Token(Token = "0x4001E0F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	public LineRenderer _renderer;

	[Token(Token = "0x4001E10")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	public bool HasOffset;

	[Token(Token = "0x4001E11")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x51")]
	protected bool _left;

	[Token(Token = "0x4001E12")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	protected Human _owner;

	[Token(Token = "0x4001E13")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	protected int _id;

	[Token(Token = "0x4001E14")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	protected List<Vector3> _nodes;

	[Token(Token = "0x4001E15")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	protected Vector3 _baseVelocity;

	[Token(Token = "0x4001E16")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x7C")]
	protected Vector3 _relativeVelocity;

	[Token(Token = "0x4001E17")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	protected Vector3 _hookPosition;

	[Token(Token = "0x4001E18")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x94")]
	protected Vector3 _lastWorldHookPosition;

	[Token(Token = "0x4001E19")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	protected float _currentLiveTime;

	[Token(Token = "0x4001E1A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	protected ParticleSystem _particles;

	[Token(Token = "0x4001E1B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	protected Material _defaultMaterial;

	[Token(Token = "0x4001E1C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	protected GameObject _endSprite;

	[Token(Token = "0x4001E1D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static LayerMask HookMask;

	[Token(Token = "0x4001E1E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	protected float _tiling;

	[Token(Token = "0x4001E1F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC4")]
	protected float _lastLength;

	[Token(Token = "0x4001E20")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	protected float _maxLiveTime;

	[Token(Token = "0x600407D")]
	[Address(RVA = "0x5AE9D70", Offset = "0x5AE8D70", VA = "0x5AE9D70")]
	public static Hook CreateHook(Human owner, bool left, int id, float maxLiveTime, bool gun = false)
	{
		return null;
	}

	[Token(Token = "0x600407E")]
	[Address(RVA = "0x5AE9ED0", Offset = "0x5AE8ED0", VA = "0x5AE9ED0")]
	protected void Awake()
	{
	}

	[Token(Token = "0x600407F")]
	[Address(RVA = "0x5AEA110", Offset = "0x5AE9110", VA = "0x5AEA110")]
	public void SetSkin(float tiling)
	{
	}

	[Token(Token = "0x6004080")]
	[Address(RVA = "0x5AEA120", Offset = "0x5AE9120", VA = "0x5AEA120")]
	private void UpdateSkin()
	{
	}

	[Token(Token = "0x6004081")]
	[Address(RVA = "0x5AEA330", Offset = "0x5AE9330", VA = "0x5AEA330")]
	public void OnSetHookState(int state, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6004082")]
	[Address(RVA = "0x5AEA4F0", Offset = "0x5AE94F0", VA = "0x5AEA4F0")]
	public void SetHookStateLocal(int state)
	{
	}

	[Token(Token = "0x6004083")]
	[Address(RVA = "0x5AEA530", Offset = "0x5AE9530", VA = "0x5AEA530")]
	public void OnSetHooking(Vector3 baseVelocity, Vector3 relativeVelocity, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6004084")]
	[Address(RVA = "0x5AEAA80", Offset = "0x5AE9A80", VA = "0x5AEAA80")]
	public void OnSetHooked(Vector3 position, int photonViewId, int objectId, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6004085")]
	[Address(RVA = "0x5AEAC70", Offset = "0x5AE9C70", VA = "0x5AEAC70")]
	private void OnSetHooked(Vector3 position, Transform transform)
	{
	}

	[Token(Token = "0x6004086")]
	[Address(RVA = "0x5AEB270", Offset = "0x5AEA270", VA = "0x5AEB270")]
	public void SetHookState(HookState state)
	{
	}

	[Token(Token = "0x6004087")]
	[Address(RVA = "0x5AEB430", Offset = "0x5AEA430", VA = "0x5AEB430")]
	public void SetHooking(Vector3 baseVelocity, Vector3 relativeVelocity)
	{
	}

	[Token(Token = "0x6004088")]
	[Address(RVA = "0x5AEB690", Offset = "0x5AEA690", VA = "0x5AEB690")]
	public void SetHooked(Vector3 position, [Optional] Transform t, int viewId = -1, int objectId = -1)
	{
	}

	[Token(Token = "0x6004089")]
	[Address(RVA = "0x5AEBA30", Offset = "0x5AEAA30", VA = "0x5AEBA30")]
	public void MoveHookParent(Transform from, Transform to)
	{
	}

	[Token(Token = "0x600408A")]
	[Address(RVA = "0x5AEBB20", Offset = "0x5AEAB20", VA = "0x5AEBB20")]
	protected void FinishDisable()
	{
	}

	[Token(Token = "0x600408B")]
	[Address(RVA = "0x5AEBB60", Offset = "0x5AEAB60", VA = "0x5AEBB60")]
	protected void UpdateHooking()
	{
	}

	[Token(Token = "0x600408C")]
	[Address(RVA = "0x5AEBD20", Offset = "0x5AEAD20", VA = "0x5AEBD20")]
	protected void UpdateHooked()
	{
	}

	[Token(Token = "0x600408D")]
	[Address(RVA = "0x5AEC8A0", Offset = "0x5AEB8A0", VA = "0x5AEC8A0")]
	protected void UpdateDisablingHooking()
	{
	}

	[Token(Token = "0x600408E")]
	[Address(RVA = "0x5AECBE0", Offset = "0x5AEBBE0", VA = "0x5AECBE0")]
	protected void UpdateDisablingHooked()
	{
	}

	[Token(Token = "0x600408F")]
	[Address(RVA = "0x5AECD20", Offset = "0x5AEBD20", VA = "0x5AECD20")]
	protected void FixedUpdateHooking()
	{
	}

	[Token(Token = "0x6004090")]
	[Address(RVA = "0x5AEDB60", Offset = "0x5AECB60", VA = "0x5AEDB60")]
	protected void FixedUpdateHooked()
	{
	}

	[Token(Token = "0x6004091")]
	[Address(RVA = "0x5AEDC70", Offset = "0x5AECC70", VA = "0x5AEDC70")]
	protected void Update()
	{
	}

	[Token(Token = "0x6004092")]
	[Address(RVA = "0x5AEDCD0", Offset = "0x5AECCD0", VA = "0x5AEDCD0")]
	public void FixedUpdateMock()
	{
	}

	[Token(Token = "0x6004093")]
	[Address(RVA = "0x5AEA270", Offset = "0x5AE9270", VA = "0x5AEA270")]
	public Vector3 GetHookPosition()
	{
		return default(Vector3);
	}

	[Token(Token = "0x6004094")]
	[Address(RVA = "0x5AEDD50", Offset = "0x5AECD50", VA = "0x5AEDD50")]
	protected void OnDestroy()
	{
	}

	[Token(Token = "0x6004095")]
	[Address(RVA = "0x5AEDE70", Offset = "0x5AECE70", VA = "0x5AEDE70")]
	public Hook()
	{
	}
}
