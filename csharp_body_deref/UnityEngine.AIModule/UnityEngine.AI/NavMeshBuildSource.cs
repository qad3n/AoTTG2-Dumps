using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.AI;

[Token(Token = "0x200000E")]
[UnityEngine.Bindings.NativeHeader("Modules/AI/Public/NavMeshBindingTypes.h")]
[UnityEngine.Scripting.UsedByNativeCode]
public struct NavMeshBuildSource
{
	[Token(Token = "0x400001B")]
	[FieldOffset(Offset = "0x0")]
	private Matrix4x4 m_Transform;

	[Token(Token = "0x400001C")]
	[FieldOffset(Offset = "0x40")]
	private Vector3 m_Size;

	[Token(Token = "0x400001D")]
	[FieldOffset(Offset = "0x4C")]
	private NavMeshBuildSourceShape m_Shape;

	[Token(Token = "0x400001E")]
	[FieldOffset(Offset = "0x50")]
	private int m_Area;

	[Token(Token = "0x400001F")]
	[FieldOffset(Offset = "0x54")]
	private int m_InstanceID;

	[Token(Token = "0x4000020")]
	[FieldOffset(Offset = "0x58")]
	private int m_ComponentID;

	[Token(Token = "0x4000021")]
	[FieldOffset(Offset = "0x5C")]
	private int m_GenerateLinks;

	[Token(Token = "0x1700001B")]
	public Matrix4x4 transform
	{
		[Token(Token = "0x600005B")]
		[Address(RVA = "0x4A6A8C0", Offset = "0x4A6A8C0", VA = "0x4A6A8C0")]
		get
		{
			return default(Matrix4x4);
		}
	}

	[Token(Token = "0x1700001C")]
	public Vector3 size
	{
		[Token(Token = "0x600005C")]
		[Address(RVA = "0x4A6A8F0", Offset = "0x4A6A8F0", VA = "0x4A6A8F0")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x1700001D")]
	public NavMeshBuildSourceShape shape
	{
		[Token(Token = "0x600005D")]
		[Address(RVA = "0x4A6A900", Offset = "0x4A6A900", VA = "0x4A6A900")]
		get
		{
			return default(NavMeshBuildSourceShape);
		}
	}

	[Token(Token = "0x1700001E")]
	public Object sourceObject
	{
		[Token(Token = "0x600005E")]
		[Address(RVA = "0x4A6A910", Offset = "0x4A6A910", VA = "0x4A6A910")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001F")]
	public Component component
	{
		[Token(Token = "0x600005F")]
		[Address(RVA = "0x4A6A970", Offset = "0x4A6A970", VA = "0x4A6A970")]
		get
		{
			return null;
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000060")]
	[Address(RVA = "0x4A6A9A0", Offset = "0x4A6A9A0", VA = "0x4A6A9A0")]
	[UnityEngine.Bindings.StaticAccessor("NavMeshBuildSource", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	private static extern Component InternalGetComponent(int instanceID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000061")]
	[Address(RVA = "0x4A6A940", Offset = "0x4A6A940", VA = "0x4A6A940")]
	[UnityEngine.Bindings.StaticAccessor("NavMeshBuildSource", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	private static extern Object InternalGetObject(int instanceID);
}
