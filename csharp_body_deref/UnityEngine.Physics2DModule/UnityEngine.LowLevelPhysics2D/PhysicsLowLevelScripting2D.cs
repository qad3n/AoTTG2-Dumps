// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.LowLevelPhysics2D.PhysicsLowLevelScripting2D
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Unity.Collections;
using UnityEngine.Bindings;

namespace UnityEngine.LowLevelPhysics2D;

[Token(Token = "0x200000D")]
[UnityEngine.Bindings.StaticAccessor("PhysicsLowLevel2D", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
[UnityEngine.Bindings.NativeHeader("Modules/Physics2D/LowLevel/PhysicsWorldManager2D.h")]
[UnityEngine.Bindings.NativeHeader("Modules/Physics2D/LowLevel/PhysicsLowLevel2D.h")]
internal static class PhysicsLowLevelScripting2D
{
	[Token(Token = "0x200000E")]
	internal struct PhysicsBuffer : IDisposable
	{
		[Token(Token = "0x400003E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private IntPtr m_Buffer;

		[Token(Token = "0x400003F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		private int m_Size;

		[Token(Token = "0x4000040")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
		private Allocator m_Allocator;

		[Token(Token = "0x17000015")]
		public readonly bool IsEmpty
		{
			[Token(Token = "0x60000B3")]
			[Address(RVA = "0xC40300", Offset = "0xC3E900", VA = "0x180C40300")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60000AF")]
		public readonly NativeArray<T> ToNativeArray<T>() where T : struct
		{
			return default(NativeArray<T>);
		}

		[Token(Token = "0x60000B0")]
		public readonly Span<T> ToSpan<T>() where T : struct
		{
			return default(Span<T>);
		}

		[Token(Token = "0x60000B1")]
		public readonly ReadOnlySpan<T> ToReadOnlySpan<T>() where T : struct
		{
			return default(ReadOnlySpan<T>);
		}

		[Token(Token = "0x60000B2")]
		[Address(RVA = "0x2FD13B0", Offset = "0x2FCF9B0", VA = "0x182FD13B0", Slot = "4")]
		public void Dispose()
		{
		}

		[Token(Token = "0x60000B4")]
		[Address(RVA = "0x2FD13F0", Offset = "0x2FCF9F0", VA = "0x182FD13F0", Slot = "3")]
		public override readonly string ToString()
		{
			return null;
		}
	}

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x2FD2840", Offset = "0x2FD0E40", VA = "0x182FD2840")]
	[UnityEngine.Bindings.NativeMethod(Name = "PhysicsBody::GetDefaultDefinition", IsThreadSafe = true)]
	internal static PhysicsBodyDefinition PhysicsBody_GetDefaultDefinition(bool useSettings)
	{
		return default(PhysicsBodyDefinition);
	}

	[Token(Token = "0x6000069")]
	[Address(RVA = "0x2FD28E0", Offset = "0x2FD0EE0", VA = "0x182FD28E0")]
	[UnityEngine.Bindings.NativeMethod(Name = "PhysicsBody::IsValid", IsThreadSafe = true)]
	internal static bool PhysicsBody_IsValid(PhysicsBody body)
	{
		return default(bool);
	}

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x2FD2730", Offset = "0x2FD0D30", VA = "0x182FD2730")]
	[UnityEngine.Bindings.NativeMethod(Name = "PhysicsBody::GetBodyType", IsThreadSafe = true)]
	internal static PhysicsBody.BodyType PhysicsBody_GetBodyType(PhysicsBody body)
	{
		return default(PhysicsBody.BodyType);
	}

	[Token(Token = "0x600006B")]
	[Address(RVA = "0x2FD27B0", Offset = "0x2FD0DB0", VA = "0x182FD27B0")]
	[UnityEngine.Bindings.NativeMethod(Name = "PhysicsBody::GetCallbackTarget", IsThreadSafe = true)]
	internal static object PhysicsBody_GetCallbackTarget(PhysicsBody body)
	{
		return null;
	}

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x2FD2970", Offset = "0x2FD0F70", VA = "0x182FD2970")]
	[UnityEngine.Bindings.NativeMethod(Name = "PhysicsChain::GetDefaultDefinition", IsThreadSafe = true)]
	internal static PhysicsChainDefinition PhysicsChain_GetDefaultDefinition(bool useSettings)
	{
		return default(PhysicsChainDefinition);
	}

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x2FD2D00", Offset = "0x2FD1300", VA = "0x182FD2D00")]
	[UnityEngine.Bindings.NativeMethod(Name = "PhysicsJoint::IsValid", IsThreadSafe = true)]
	internal static bool PhysicsJoint_IsValid(PhysicsJoint joint)
	{
		return default(bool);
	}

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x2FD2C80", Offset = "0x2FD1280", VA = "0x182FD2C80")]
	[UnityEngine.Bindings.NativeMethod(Name = "PhysicsJoint::GetJointType", IsThreadSafe = true)]
	internal static PhysicsJoint.JointType PhysicsJoint_GetJointType(PhysicsJoint joint)
	{
		return default(PhysicsJoint.JointType);
	}

	[Token(Token = "0x600006F")]
	[Address(RVA = "0x2FD2C00", Offset = "0x2FD1200", VA = "0x182FD2C00")]
	[UnityEngine.Bindings.NativeMethod(Name = "PhysicsJoint::GetCallbackTarget", IsThreadSafe = true)]
	internal static object PhysicsJoint_GetCallbackTarget(PhysicsJoint joint)
	{
		return null;
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x2FD2480", Offset = "0x2FD0A80", VA = "0x182FD2480")]
	[UnityEngine.Bindings.NativeMethod(Name = "PhysicsDistanceJoint::GetDefaultDefinition", IsThreadSafe = true)]
	internal static PhysicsDistanceJointDefinition DistanceJoint_GetDefaultDefinition(bool useSettings)
	{
		return default(PhysicsDistanceJointDefinition);
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x2FD3AB0", Offset = "0x2FD20B0", VA = "0x182FD3AB0")]
	[UnityEngine.Bindings.NativeMethod(Name = "PhysicsRelativeJoint::GetDefaultDefinition", IsThreadSafe = true)]
	internal static PhysicsRelativeJointDefinition RelativeJoint_GetDefaultDefinition(bool useSettings)
	{
		return default(PhysicsRelativeJointDefinition);
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x2FD3B70", Offset = "0x2FD2170", VA = "0x182FD3B70")]
	[UnityEngine.Bindings.NativeMethod(Name = "PhysicsSliderJoint::GetDefaultDefinition", IsThreadSafe = true)]
	internal static PhysicsSliderJointDefinition SliderJoint_GetDefaultDefinition(bool useSettings)
	{
		return default(PhysicsSliderJointDefinition);
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x2FD2600", Offset = "0x2FD0C00", VA = "0x182FD2600")]
	[UnityEngine.Bindings.NativeMethod(Name = "PhysicsHingeJoint::GetDefaultDefinition", IsThreadSafe = true)]
	internal static PhysicsHingeJointDefinition HingeJoint_GetDefaultDefinition(bool useSettings)
	{
		return default(PhysicsHingeJointDefinition);
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x2FD2540", Offset = "0x2FD0B40", VA = "0x182FD2540")]
	[UnityEngine.Bindings.NativeMethod(Name = "PhysicsFixedJoint::GetDefaultDefinition", IsThreadSafe = true)]
	internal static PhysicsFixedJointDefinition FixedJoint_GetDefaultDefinition(bool useSettings)
	{
		return default(PhysicsFixedJointDefinition);
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x2FD3C30", Offset = "0x2FD2230", VA = "0x182FD3C30")]
	[UnityEngine.Bindings.NativeMethod(Name = "PhysicsWheelJoint::GetDefaultDefinition", IsThreadSafe = true)]
	internal static PhysicsWheelJointDefinition WheelJoint_GetDefaultDefinition(bool useSettings)
	{
		return default(PhysicsWheelJointDefinition);
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x2FD2DE0", Offset = "0x2FD13E0", VA = "0x182FD2DE0")]
	[UnityEngine.Bindings.NativeMethod(Name = "PhysicsRotate::Create", IsThreadSafe = true)]
	internal static PhysicsRotate PhysicsRotate_CreateAngle(float angle)
	{
		return default(PhysicsRotate);
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x2FD2EF0", Offset = "0x2FD14F0", VA = "0x182FD2EF0")]
	[UnityEngine.Bindings.NativeMethod(Name = "PhysicsRotate::IsValid", IsThreadSafe = true)]
	internal static bool PhysicsRotate_IsValid(PhysicsRotate rotation)
	{
		return default(bool);
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x2FD2E70", Offset = "0x2FD1470", VA = "0x182FD2E70")]
	[UnityEngine.Bindings.NativeMethod(Name = "PhysicsRotate::GetAngle", IsThreadSafe = true)]
	internal static float PhysicsRotate_GetAngle(PhysicsRotate rotate)
	{
		return default(float);
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x2FD26B0", Offset = "0x2FD0CB0", VA = "0x182FD26B0")]
	[UnityEngine.Bindings.NativeMethod(Name = "PhysicsAABB::IsValid", IsThreadSafe = true)]
	internal static bool PhysicsAABB_IsValid(PhysicsAABB aabb)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600007A")]
	[Address(RVA = "0x2FD2D40", Offset = "0x2FD1340", VA = "0x182FD2D40")]
	[UnityEngine.Bindings.NativeMethod(Name = "PhysicsMath::Atan2", IsThreadSafe = true)]
	internal static extern float PhysicsMath_Atan2(float y, float x);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600007B")]
	[Address(RVA = "0x2FD2A50", Offset = "0x2FD1050", VA = "0x182FD2A50")]
	[UnityEngine.Bindings.NativeMethod(Name = "PhysicsLowLevel2D::GetBypassLowLevel")]
	[UnityEngine.Bindings.StaticAccessor("GetPhysicsLowLevel2D()", UnityEngine.Bindings.StaticAccessorType.Arrow)]
	internal static extern bool PhysicsGlobal_GetBypassLowLevel();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600007C")]
	[Address(RVA = "0x2FD2A80", Offset = "0x2FD1080", VA = "0x182FD2A80")]
	[UnityEngine.Bindings.NativeMethod(Name = "PhysicsLowLevel2D::IsRenderingAllowed")]
	[UnityEngine.Bindings.StaticAccessor("GetPhysicsLowLevel2D()", UnityEngine.Bindings.StaticAccessorType.Arrow)]
	internal static extern bool PhysicsGlobal_IsRenderingAllowed();

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x2FD2B10", Offset = "0x2FD1110", VA = "0x182FD2B10")]
	[UnityEngine.Bindings.NativeMethod(Name = "PhysicsWorldManager2D::PopulateWorldTransformWrite")]
	[UnityEngine.Bindings.StaticAccessor("GetPhysicsLowLevel2D()->GetWorldManager2D()", UnityEngine.Bindings.StaticAccessorType.Arrow)]
	internal static int PhysicsGlobal_PopulateWorldTransformWrite(PhysicsWorld world, IntPtr transformAccessArrayIntPtr, Span<PhysicsBody.TransformWriteTween> transformWriteTweensArray)
	{
		return default(int);
	}

	[Token(Token = "0x600007E")]
	[Address(RVA = "0x2FD3000", Offset = "0x2FD1600", VA = "0x182FD3000")]
	[UnityEngine.Bindings.NativeMethod(Name = "PhysicsShape::GetDefaultDefinition", IsThreadSafe = true)]
	internal static PhysicsShapeDefinition PhysicsShape_GetDefaultDefinition(bool useSettings)
	{
		return default(PhysicsShapeDefinition);
	}

	[Token(Token = "0x600007F")]
	[Address(RVA = "0x2FD30A0", Offset = "0x2FD16A0", VA = "0x182FD30A0")]
	[UnityEngine.Bindings.NativeMethod(Name = "PhysicsShape::GetDefaultSurfaceMaterial", IsThreadSafe = true)]
	internal static PhysicsShape.SurfaceMaterial PhysicsShape_GetDefaultSurfaceMaterial()
	{
		return default(PhysicsShape.SurfaceMaterial);
	}

	[Token(Token = "0x6000080")]
	[Address(RVA = "0x2FD31A0", Offset = "0x2FD17A0", VA = "0x182FD31A0")]
	[UnityEngine.Bindings.NativeMethod(Name = "PhysicsShape::IsValid", IsThreadSafe = true)]
	internal static bool PhysicsShape_IsValid(PhysicsShape shape)
	{
		return default(bool);
	}

	[Token(Token = "0x6000081")]
	[Address(RVA = "0x2FD3120", Offset = "0x2FD1720", VA = "0x182FD3120")]
	[UnityEngine.Bindings.NativeMethod(Name = "PhysicsShape::GetShapeType", IsThreadSafe = true)]
	internal static PhysicsShape.ShapeType PhysicsShape_GetShapeType(PhysicsShape shape)
	{
		return default(PhysicsShape.ShapeType);
	}

	[Token(Token = "0x6000082")]
	[Address(RVA = "0x2FD2F70", Offset = "0x2FD1570", VA = "0x182FD2F70")]
	[UnityEngine.Bindings.NativeMethod(Name = "PhysicsShape::GetCallbackTarget", IsThreadSafe = true)]
	internal static object PhysicsShape_GetCallbackTarget(PhysicsShape shape)
	{
		return null;
	}

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x2FD2A10", Offset = "0x2FD1010", VA = "0x182FD2A10")]
	[UnityEngine.Bindings.NativeMethod(Name = "PhysicsLowLevel2D::PhysicsContactId::IsValid", IsThreadSafe = true)]
	internal static bool PhysicsContactId_IsValid(PhysicsShape.ContactId contactId)
	{
		return default(bool);
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x2FD3410", Offset = "0x2FD1A10", VA = "0x182FD3410")]
	[UnityEngine.Bindings.NativeMethod(Name = "PhysicsWorld::GetDefaultDefinition", IsThreadSafe = true)]
	internal static PhysicsWorldDefinition PhysicsWorld_GetDefaultDefinition(bool useSettings)
	{
		return default(PhysicsWorldDefinition);
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x2FD3930", Offset = "0x2FD1F30", VA = "0x182FD3930")]
	[UnityEngine.Bindings.NativeMethod(Name = "PhysicsWorld::IsValid", IsThreadSafe = true)]
	internal static bool PhysicsWorld_IsValid(PhysicsWorld world)
	{
		return default(bool);
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x2FD39C0", Offset = "0x2FD1FC0", VA = "0x182FD39C0")]
	[UnityEngine.Bindings.NativeMethod(Name = "PhysicsWorld::SetTransformWriteTweens", IsThreadSafe = true)]
	internal static void PhysicsWorld_SetTransformWriteTweens(PhysicsWorld world, ReadOnlySpan<PhysicsBody.TransformWriteTween> transformWriteTweens)
	{
	}

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x2FD32B0", Offset = "0x2FD18B0", VA = "0x182FD32B0")]
	[UnityEngine.Bindings.NativeMethod(Name = "PhysicsWorld::GetBodyUpdateCallbackTargets", IsThreadSafe = true)]
	internal static PhysicsCallbacks.BodyUpdateCallbackTargets PhysicsWorld_GetBodyUpdateCallbackTargets(PhysicsWorld world, Allocator allocator)
	{
		return default(PhysicsCallbacks.BodyUpdateCallbackTargets);
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x2FD3890", Offset = "0x2FD1E90", VA = "0x182FD3890")]
	[UnityEngine.Bindings.NativeMethod(Name = "PhysicsWorld::GetTriggerCallbackTargets", IsThreadSafe = true)]
	internal static PhysicsCallbacks.TriggerCallbackTargets PhysicsWorld_GetTriggerCallbackTargets(PhysicsWorld world, Allocator allocator)
	{
		return default(PhysicsCallbacks.TriggerCallbackTargets);
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x2FD3360", Offset = "0x2FD1960", VA = "0x182FD3360")]
	[UnityEngine.Bindings.NativeMethod(Name = "PhysicsWorld::GetContactCallbackTargets", IsThreadSafe = true)]
	internal static PhysicsCallbacks.ContactCallbackTargets PhysicsWorld_GetContactCallbackTargets(PhysicsWorld world, Allocator allocator)
	{
		return default(PhysicsCallbacks.ContactCallbackTargets);
	}

	[Token(Token = "0x600008A")]
	[Address(RVA = "0x2FD34C0", Offset = "0x2FD1AC0", VA = "0x182FD34C0")]
	[UnityEngine.Bindings.NativeMethod(Name = "PhysicsWorld::GetJointThresholdCallbackTargets", IsThreadSafe = true)]
	internal static PhysicsCallbacks.JointThresholdCallbackTargets PhysicsWorld_GetJointThresholdCallbackTargets(PhysicsWorld world, Allocator allocator)
	{
		return default(PhysicsCallbacks.JointThresholdCallbackTargets);
	}

	[Token(Token = "0x600008B")]
	[Address(RVA = "0x2FD3570", Offset = "0x2FD1B70", VA = "0x182FD3570")]
	[UnityEngine.Bindings.NativeMethod(Name = "PhysicsWorld::GetRenderMaterial", IsThreadSafe = true)]
	internal static Material PhysicsWorld_GetRenderMaterial(string editorResourceName, string playerResourceName)
	{
		return null;
	}

	[Token(Token = "0x600008C")]
	[Address(RVA = "0x2FD3220", Offset = "0x2FD1820", VA = "0x182FD3220")]
	[UnityEngine.Bindings.NativeMethod(Name = "PhysicsWorld::DrawAllWorlds")]
	internal static void PhysicsWorld_DrawAllWorlds(PhysicsAABB drawAABB)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008D")]
	[Address(RVA = "0x2FD27F0", Offset = "0x2FD0DF0", VA = "0x182FD27F0")]
	private static extern void PhysicsBody_GetDefaultDefinition_Injected(bool useSettings, out PhysicsBodyDefinition ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008E")]
	[Address(RVA = "0x2FD28A0", Offset = "0x2FD0EA0", VA = "0x182FD28A0")]
	private static extern bool PhysicsBody_IsValid_Injected([In] ref PhysicsBody body);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008F")]
	[Address(RVA = "0x2FD26F0", Offset = "0x2FD0CF0", VA = "0x182FD26F0")]
	private static extern PhysicsBody.BodyType PhysicsBody_GetBodyType_Injected([In] ref PhysicsBody body);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000090")]
	[Address(RVA = "0x2FD2770", Offset = "0x2FD0D70", VA = "0x182FD2770")]
	private static extern object PhysicsBody_GetCallbackTarget_Injected([In] ref PhysicsBody body);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000091")]
	[Address(RVA = "0x2FD2920", Offset = "0x2FD0F20", VA = "0x182FD2920")]
	private static extern void PhysicsChain_GetDefaultDefinition_Injected(bool useSettings, out PhysicsChainDefinition ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000092")]
	[Address(RVA = "0x2FD2CC0", Offset = "0x2FD12C0", VA = "0x182FD2CC0")]
	private static extern bool PhysicsJoint_IsValid_Injected([In] ref PhysicsJoint joint);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000093")]
	[Address(RVA = "0x2FD2C40", Offset = "0x2FD1240", VA = "0x182FD2C40")]
	private static extern PhysicsJoint.JointType PhysicsJoint_GetJointType_Injected([In] ref PhysicsJoint joint);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000094")]
	[Address(RVA = "0x2FD2BC0", Offset = "0x2FD11C0", VA = "0x182FD2BC0")]
	private static extern object PhysicsJoint_GetCallbackTarget_Injected([In] ref PhysicsJoint joint);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000095")]
	[Address(RVA = "0x2FD2430", Offset = "0x2FD0A30", VA = "0x182FD2430")]
	private static extern void DistanceJoint_GetDefaultDefinition_Injected(bool useSettings, out PhysicsDistanceJointDefinition ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000096")]
	[Address(RVA = "0x2FD3A60", Offset = "0x2FD2060", VA = "0x182FD3A60")]
	private static extern void RelativeJoint_GetDefaultDefinition_Injected(bool useSettings, out PhysicsRelativeJointDefinition ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000097")]
	[Address(RVA = "0x2FD3B20", Offset = "0x2FD2120", VA = "0x182FD3B20")]
	private static extern void SliderJoint_GetDefaultDefinition_Injected(bool useSettings, out PhysicsSliderJointDefinition ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000098")]
	[Address(RVA = "0x2FD25B0", Offset = "0x2FD0BB0", VA = "0x182FD25B0")]
	private static extern void HingeJoint_GetDefaultDefinition_Injected(bool useSettings, out PhysicsHingeJointDefinition ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000099")]
	[Address(RVA = "0x2FD24F0", Offset = "0x2FD0AF0", VA = "0x182FD24F0")]
	private static extern void FixedJoint_GetDefaultDefinition_Injected(bool useSettings, out PhysicsFixedJointDefinition ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600009A")]
	[Address(RVA = "0x2FD3BE0", Offset = "0x2FD21E0", VA = "0x182FD3BE0")]
	private static extern void WheelJoint_GetDefaultDefinition_Injected(bool useSettings, out PhysicsWheelJointDefinition ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600009B")]
	[Address(RVA = "0x2FD2D90", Offset = "0x2FD1390", VA = "0x182FD2D90")]
	private static extern void PhysicsRotate_CreateAngle_Injected(float angle, out PhysicsRotate ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600009C")]
	[Address(RVA = "0x2FD2EB0", Offset = "0x2FD14B0", VA = "0x182FD2EB0")]
	private static extern bool PhysicsRotate_IsValid_Injected([In] ref PhysicsRotate rotation);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600009D")]
	[Address(RVA = "0x2FD2E30", Offset = "0x2FD1430", VA = "0x182FD2E30")]
	private static extern float PhysicsRotate_GetAngle_Injected([In] ref PhysicsRotate rotate);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600009E")]
	[Address(RVA = "0x2FD2670", Offset = "0x2FD0C70", VA = "0x182FD2670")]
	private static extern bool PhysicsAABB_IsValid_Injected([In] ref PhysicsAABB aabb);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600009F")]
	[Address(RVA = "0x2FD2AB0", Offset = "0x2FD10B0", VA = "0x182FD2AB0")]
	private static extern int PhysicsGlobal_PopulateWorldTransformWrite_Injected([In] ref PhysicsWorld world, IntPtr transformAccessArrayIntPtr, ref UnityEngine.Bindings.ManagedSpanWrapper transformWriteTweensArray);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x2FD2FB0", Offset = "0x2FD15B0", VA = "0x182FD2FB0")]
	private static extern void PhysicsShape_GetDefaultDefinition_Injected(bool useSettings, out PhysicsShapeDefinition ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x2FD3060", Offset = "0x2FD1660", VA = "0x182FD3060")]
	private static extern void PhysicsShape_GetDefaultSurfaceMaterial_Injected(out PhysicsShape.SurfaceMaterial ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x2FD3160", Offset = "0x2FD1760", VA = "0x182FD3160")]
	private static extern bool PhysicsShape_IsValid_Injected([In] ref PhysicsShape shape);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x2FD30E0", Offset = "0x2FD16E0", VA = "0x182FD30E0")]
	private static extern PhysicsShape.ShapeType PhysicsShape_GetShapeType_Injected([In] ref PhysicsShape shape);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x2FD2F30", Offset = "0x2FD1530", VA = "0x182FD2F30")]
	private static extern object PhysicsShape_GetCallbackTarget_Injected([In] ref PhysicsShape shape);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x2FD29D0", Offset = "0x2FD0FD0", VA = "0x182FD29D0")]
	private static extern bool PhysicsContactId_IsValid_Injected([In] ref PhysicsShape.ContactId contactId);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x2FD33C0", Offset = "0x2FD19C0", VA = "0x182FD33C0")]
	private static extern void PhysicsWorld_GetDefaultDefinition_Injected(bool useSettings, out PhysicsWorldDefinition ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x2FD38F0", Offset = "0x2FD1EF0", VA = "0x182FD38F0")]
	private static extern bool PhysicsWorld_IsValid_Injected([In] ref PhysicsWorld world);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000A8")]
	[Address(RVA = "0x2FD3970", Offset = "0x2FD1F70", VA = "0x182FD3970")]
	private static extern void PhysicsWorld_SetTransformWriteTweens_Injected([In] ref PhysicsWorld world, ref UnityEngine.Bindings.ManagedSpanWrapper transformWriteTweens);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000A9")]
	[Address(RVA = "0x2FD3260", Offset = "0x2FD1860", VA = "0x182FD3260")]
	private static extern void PhysicsWorld_GetBodyUpdateCallbackTargets_Injected([In] ref PhysicsWorld world, Allocator allocator, out PhysicsCallbacks.BodyUpdateCallbackTargets ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000AA")]
	[Address(RVA = "0x2FD3840", Offset = "0x2FD1E40", VA = "0x182FD3840")]
	private static extern void PhysicsWorld_GetTriggerCallbackTargets_Injected([In] ref PhysicsWorld world, Allocator allocator, out PhysicsCallbacks.TriggerCallbackTargets ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000AB")]
	[Address(RVA = "0x2FD3310", Offset = "0x2FD1910", VA = "0x182FD3310")]
	private static extern void PhysicsWorld_GetContactCallbackTargets_Injected([In] ref PhysicsWorld world, Allocator allocator, out PhysicsCallbacks.ContactCallbackTargets ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000AC")]
	[Address(RVA = "0x2FD3470", Offset = "0x2FD1A70", VA = "0x182FD3470")]
	private static extern void PhysicsWorld_GetJointThresholdCallbackTargets_Injected([In] ref PhysicsWorld world, Allocator allocator, out PhysicsCallbacks.JointThresholdCallbackTargets ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000AD")]
	[Address(RVA = "0x2FD3520", Offset = "0x2FD1B20", VA = "0x182FD3520")]
	private static extern IntPtr PhysicsWorld_GetRenderMaterial_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper editorResourceName, ref UnityEngine.Bindings.ManagedSpanWrapper playerResourceName);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000AE")]
	[Address(RVA = "0x2FD31E0", Offset = "0x2FD17E0", VA = "0x182FD31E0")]
	private static extern void PhysicsWorld_DrawAllWorlds_Injected([In] ref PhysicsAABB drawAABB);
}
