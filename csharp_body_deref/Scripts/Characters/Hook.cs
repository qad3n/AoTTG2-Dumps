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

[Token(Token = "0x200064B")]
internal class Hook : MonoBehaviour
{
	[Token(Token = "0x4001C5D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly RaycastHit[] _raycastHits;

	[Token(Token = "0x4001C5E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public HookState State;

	[Token(Token = "0x4001C5F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public Transform Anchor;

	[Token(Token = "0x4001C60")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public BaseCharacter HookCharacter;

	[Token(Token = "0x4001C61")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public Transform HookParent;

	[Token(Token = "0x4001C62")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	protected bool _hasHookParent;

	[Token(Token = "0x4001C63")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	public LineRenderer _renderer;

	[Token(Token = "0x4001C64")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	public bool HasOffset;

	[Token(Token = "0x4001C65")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x51")]
	protected bool _left;

	[Token(Token = "0x4001C66")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	protected Human _owner;

	[Token(Token = "0x4001C67")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	protected int _id;

	[Token(Token = "0x4001C68")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	protected List<Vector3> _nodes;

	[Token(Token = "0x4001C69")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	protected Vector3 _baseVelocity;

	[Token(Token = "0x4001C6A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x7C")]
	protected Vector3 _relativeVelocity;

	[Token(Token = "0x4001C6B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	protected Vector3 _hookPosition;

	[Token(Token = "0x4001C6C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x94")]
	protected Vector3 _lastWorldHookPosition;

	[Token(Token = "0x4001C6D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	protected float _currentLiveTime;

	[Token(Token = "0x4001C6E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	protected ParticleSystem _particles;

	[Token(Token = "0x4001C6F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	protected Material _defaultMaterial;

	[Token(Token = "0x4001C70")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	protected GameObject _endSprite;

	[Token(Token = "0x4001C71")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static LayerMask HookMask;

	[Token(Token = "0x4001C72")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	protected float _tiling;

	[Token(Token = "0x4001C73")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC4")]
	protected float _lastLength;

	[Token(Token = "0x4001C74")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	protected float _maxLiveTime;

	[Token(Token = "0x6003DE8")]
	[Address(RVA = "0x21489C0", Offset = "0x2146FC0", VA = "0x1821489C0")]
	public static Hook CreateHook(Human owner, bool left, int id, float maxLiveTime, bool gun = false)
	{
		return null;
	}

	[Token(Token = "0x6003DE9")]
	[Address(RVA = "0x21487B0", Offset = "0x2146DB0", VA = "0x1821487B0")]
	protected void Awake()
	{
	}

	[Token(Token = "0x6003DEA")]
	[Address(RVA = "0xB5BD90", Offset = "0xB5A390", VA = "0x180B5BD90")]
	public void SetSkin(float tiling)
	{
	}

	[Token(Token = "0x6003DEB")]
	[Address(RVA = "0x214C7A0", Offset = "0x214ADA0", VA = "0x18214C7A0")]
	private void UpdateSkin()
	{
	}

	[Token(Token = "0x6003DEC")]
	[Address(RVA = "0x2149EB0", Offset = "0x21484B0", VA = "0x182149EB0")]
	public void OnSetHookState(int state, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003DED")]
	[Address(RVA = "0x214AD60", Offset = "0x2149360", VA = "0x18214AD60")]
	public void SetHookStateLocal(int state)
	{
	}

	[Token(Token = "0x6003DEE")]
	[Address(RVA = "0x214A840", Offset = "0x2148E40", VA = "0x18214A840")]
	public void OnSetHooking(Vector3 baseVelocity, Vector3 relativeVelocity, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003DEF")]
	[Address(RVA = "0x214A070", Offset = "0x2148670", VA = "0x18214A070")]
	public void OnSetHooked(Vector3 position, int photonViewId, int objectId, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003DF0")]
	[Address(RVA = "0x214A250", Offset = "0x2148850", VA = "0x18214A250")]
	private void OnSetHooked(Vector3 position, Transform transform)
	{
	}

	[Token(Token = "0x6003DF1")]
	[Address(RVA = "0x214ADA0", Offset = "0x21493A0", VA = "0x18214ADA0")]
	public void SetHookState(HookState state)
	{
	}

	[Token(Token = "0x6003DF2")]
	[Address(RVA = "0x214B3B0", Offset = "0x21499B0", VA = "0x18214B3B0")]
	public void SetHooking(Vector3 baseVelocity, Vector3 relativeVelocity)
	{
	}

	[Token(Token = "0x6003DF3")]
	[Address(RVA = "0x214AF90", Offset = "0x2149590", VA = "0x18214AF90")]
	public void SetHooked(Vector3 position, [Optional] Transform t, int viewId = -1, int objectId = -1)
	{
	}

	[Token(Token = "0x6003DF4")]
	[Address(RVA = "0x2148B10", Offset = "0x2147110", VA = "0x182148B10")]
	protected void FinishDisable()
	{
	}

	[Token(Token = "0x6003DF5")]
	[Address(RVA = "0x214C550", Offset = "0x214AB50", VA = "0x18214C550")]
	protected void UpdateHooking()
	{
	}

	[Token(Token = "0x6003DF6")]
	[Address(RVA = "0x214BBE0", Offset = "0x214A1E0", VA = "0x18214BBE0")]
	protected void UpdateHooked()
	{
	}

	[Token(Token = "0x6003DF7")]
	[Address(RVA = "0x214B7C0", Offset = "0x2149DC0", VA = "0x18214B7C0")]
	protected void UpdateDisablingHooking()
	{
	}

	[Token(Token = "0x6003DF8")]
	[Address(RVA = "0x214B650", Offset = "0x2149C50", VA = "0x18214B650")]
	protected void UpdateDisablingHooked()
	{
	}

	[Token(Token = "0x6003DF9")]
	[Address(RVA = "0x2148C80", Offset = "0x2147280", VA = "0x182148C80")]
	protected void FixedUpdateHooking()
	{
	}

	[Token(Token = "0x6003DFA")]
	[Address(RVA = "0x2148B60", Offset = "0x2147160", VA = "0x182148B60")]
	protected void FixedUpdateHooked()
	{
	}

	[Token(Token = "0x6003DFB")]
	[Address(RVA = "0x214C890", Offset = "0x214AE90", VA = "0x18214C890")]
	protected void Update()
	{
	}

	[Token(Token = "0x6003DFC")]
	[Address(RVA = "0x2149AF0", Offset = "0x21480F0", VA = "0x182149AF0")]
	public void FixedUpdateMock()
	{
	}

	[Token(Token = "0x6003DFD")]
	[Address(RVA = "0x2149C80", Offset = "0x2148280", VA = "0x182149C80")]
	public Vector3 GetHookPosition()
	{
		return default(Vector3);
	}

	[Token(Token = "0x6003DFE")]
	[Address(RVA = "0x2149D70", Offset = "0x2148370", VA = "0x182149D70")]
	protected void OnDestroy()
	{
	}

	[Token(Token = "0x6003DFF")]
	[Address(RVA = "0x214CCA0", Offset = "0x214B2A0", VA = "0x18214CCA0")]
	public Hook()
	{
	}
}
