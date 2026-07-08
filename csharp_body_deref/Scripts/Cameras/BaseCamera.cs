using Il2CppDummyDll;
using UnityEngine;
using Utility;

namespace Cameras;

[Token(Token = "0x20006B6")]
internal class BaseCamera : MonoBehaviour
{
	[Token(Token = "0x4002086")]
	[FieldOffset(Offset = "0x20")]
	public Camera Camera;

	[Token(Token = "0x4002087")]
	[FieldOffset(Offset = "0x28")]
	public BaseComponentCache Cache;

	[Token(Token = "0x4002088")]
	[FieldOffset(Offset = "0x30")]
	public Skybox Skybox;

	[Token(Token = "0x6004300")]
	[Address(RVA = "0x40427C0", Offset = "0x40427C0", VA = "0x40427C0", Slot = "4")]
	protected virtual void Awake()
	{
	}

	[Token(Token = "0x6004301")]
	[Address(RVA = "0x4042B60", Offset = "0x4042B60", VA = "0x4042B60", Slot = "5")]
	public virtual void OnFinishLoading()
	{
	}

	[Token(Token = "0x6004302")]
	[Address(RVA = "0x4042B80", Offset = "0x4042B80", VA = "0x4042B80", Slot = "6")]
	protected virtual void SetDefaultCameraPosition()
	{
	}

	[Token(Token = "0x6004303")]
	[Address(RVA = "0x4042B90", Offset = "0x4042B90", VA = "0x4042B90", Slot = "7")]
	protected virtual void LateUpdate()
	{
	}

	[Token(Token = "0x6004304")]
	[Address(RVA = "0x4042BA0", Offset = "0x4042BA0", VA = "0x4042BA0")]
	public BaseCamera()
	{
	}
}
