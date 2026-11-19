// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.LowLevelPhysics2D.PhysicsLowLevelScripting2D
// Update status: unchanged since the previous dump
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
[UnityEngine.Bindings.NativeHeader("Modules/Physics2D/LowLevel/PhysicsWorldManager2D.h")]
[UnityEngine.Bindings.NativeHeader("Modules/Physics2D/LowLevel/PhysicsLowLevel2D.h")]
[UnityEngine.Bindings.StaticAccessor("PhysicsLowLevel2D", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
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
			[Address(RVA = "0x69CB3E0", Offset = "0x69CA3E0", VA = "0x69CB3E0")]
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
		[Address(RVA = "0x69CB3B0", Offset = "0x69CA3B0", VA = "0x69CB3B0", Slot = "4")]
		public void Dispose()
		{
		}

		[Token(Token = "0x60000B4")]
		[Address(RVA = "0x69CB3F0", Offset = "0x69CA3F0", VA = "0x69CB3F0", Slot = "3")]
		public override readonly string ToString()
		{
			return null;
		}
	}

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x69C9AE0", Offset = "0x69C8AE0", VA = "0x69C9AE0")]
	[UnityEngine.Bindings.NativeMethod(Name = "PhysicsBody::GetDefaultDefinition", IsThreadSafe = true)]
	internal static PhysicsBodyDefinition PhysicsBody_GetDefaultDefinition(bool useSettings)
	{
		return default(PhysicsBodyDefinition);
	}

	[Token(Token = "0x6000069")]
	[Address(RVA = "0x69C9BB0", Offset = "0x69C8BB0", VA = "0x69C9BB0")]
	[UnityEngine.Bindings.NativeMethod(Name = "PhysicsBody::IsValid", IsThreadSafe = true)]
	internal static bool PhysicsBody_IsValid(PhysicsBody body)
	{
		return default(bool);
	}

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x69C9C20", Offset = "0x69C8C20", VA = "0x69C9C20")]
	[UnityEngine.Bindings.NativeMethod(Name = "PhysicsBody::GetBodyType", IsThreadSafe = true)]
	internal static PhysicsBody.BodyType PhysicsBody_GetBodyType(PhysicsBody body)
	{
		return default(PhysicsBody.BodyType);
	}

	[Token(Token = "0x600006B")]
	[Address(RVA = "0x69C9C90", Offset = "0x69C8C90", VA = "0x69C9C90")]
	[UnityEngine.Bindings.NativeMethod(Name = "PhysicsBody::GetCallbackTarget", IsThreadSafe = true)]
	internal static object PhysicsBody_GetCallbackTarget(PhysicsBody body)
	{
		return null;
	}

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x69C9D00", Offset = "0x69C8D00", VA = "0x69C9D00")]
	[UnityEngine.Bindings.NativeMethod(Name = "PhysicsChain::GetDefaultDefinition", IsThreadSafe = true)]
	internal static PhysicsChainDefinition PhysicsChain_GetDefaultDefinition(bool useSettings)
	{
		return default(PhysicsChainDefinition);
	}

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x69C9DC0", Offset = "0x69C8DC0", VA = "0x69C9DC0")]
	[UnityEngine.Bindings.NativeMethod(Name = "PhysicsJoint::IsValid", IsThreadSafe = true)]
	internal static bool PhysicsJoint_IsValid(PhysicsJoint joint)
	{
		return default(bool);
	}

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x69C9E30", Offset = "0x69C8E30", VA = "0x69C9E30")]
	[UnityEngine.Bindings.NativeMethod(Name = "PhysicsJoint::GetJointType", IsThreadSafe = true)]
	internal static PhysicsJoint.JointType PhysicsJoint_GetJointType(PhysicsJoint joint)
	{
		return default(PhysicsJoint.JointType);
	}

	[Token(Token = "0x600006F")]
	[Address(RVA = "0x69C9EA0", Offset = "0x69C8EA0", VA = "0x69C9EA0")]
	[UnityEngine.Bindings.NativeMethod(Name = "PhysicsJoint::GetCallbackTarget", IsThreadSafe = true)]
	internal static object PhysicsJoint_GetCallbackTarget(PhysicsJoint joint)
	{
		return null;
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x69C9F10", Offset = "0x69C8F10", VA = "0x69C9F10")]
	[UnityEngine.Bindings.NativeMethod(Name = "PhysicsDistanceJoint::GetDefaultDefinition", IsThreadSafe = true)]
	internal static PhysicsDistanceJointDefinition DistanceJoint_GetDefaultDefinition(bool useSettings)
	{
		return default(PhysicsDistanceJointDefinition);
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x69CA010", Offset = "0x69C9010", VA = "0x69CA010")]
	[UnityEngine.Bindings.NativeMethod(Name = "PhysicsRelativeJoint::GetDefaultDefinition", IsThreadSafe = true)]
	internal static PhysicsRelativeJointDefinition RelativeJoint_GetDefaultDefinition(bool useSettings)
	{
		return default(PhysicsRelativeJointDefinition);
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x69CA100", Offset = "0x69C9100", VA = "0x69CA100")]
	[UnityEngine.Bindings.NativeMethod(Name = "PhysicsSliderJoint::GetDefaultDefinition", IsThreadSafe = true)]
	internal static PhysicsSliderJointDefinition SliderJoint_GetDefaultDefinition(bool useSettings)
	{
		return default(PhysicsSliderJointDefinition);
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x69CA1E0", Offset = "0x69C91E0", VA = "0x69CA1E0")]
	[UnityEngine.Bindings.NativeMethod(Name = "PhysicsHingeJoint::GetDefaultDefinition", IsThreadSafe = true)]
	internal static PhysicsHingeJointDefinition HingeJoint_GetDefaultDefinition(bool useSettings)
	{
		return default(PhysicsHingeJointDefinition);
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x69CA2C0", Offset = "0x69C92C0", VA = "0x69CA2C0")]
	[UnityEngine.Bindings.NativeMethod(Name = "PhysicsFixedJoint::GetDefaultDefinition", IsThreadSafe = true)]
	internal static PhysicsFixedJointDefinition FixedJoint_GetDefaultDefinition(bool useSettings)
	{
		return default(PhysicsFixedJointDefinition);
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x69CA3A0", Offset = "0x69C93A0", VA = "0x69CA3A0")]
	[UnityEngine.Bindings.NativeMethod(Name = "PhysicsWheelJoint::GetDefaultDefinition", IsThreadSafe = true)]
	internal static PhysicsWheelJointDefinition WheelJoint_GetDefaultDefinition(bool useSettings)
	{
		return default(PhysicsWheelJointDefinition);
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x69CA480", Offset = "0x69C9480", VA = "0x69CA480")]
	[UnityEngine.Bindings.NativeMethod(Name = "PhysicsRotate::Create", IsThreadSafe = true)]
	internal static PhysicsRotate PhysicsRotate_CreateAngle(float angle)
	{
		return default(PhysicsRotate);
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x69CA520", Offset = "0x69C9520", VA = "0x69CA520")]
	[UnityEngine.Bindings.NativeMethod(Name = "PhysicsRotate::IsValid", IsThreadSafe = true)]
	internal static bool PhysicsRotate_IsValid(PhysicsRotate rotation)
	{
		return default(bool);
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x69CA590", Offset = "0x69C9590", VA = "0x69CA590")]
	[UnityEngine.Bindings.NativeMethod(Name = "PhysicsRotate::GetAngle", IsThreadSafe = true)]
	internal static float PhysicsRotate_GetAngle(PhysicsRotate rotate)
	{
		return default(float);
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x69CA600", Offset = "0x69C9600", VA = "0x69CA600")]
	[UnityEngine.Bindings.NativeMethod(Name = "PhysicsAABB::IsValid", IsThreadSafe = true)]
	internal static bool PhysicsAABB_IsValid(PhysicsAABB aabb)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600007A")]
	[Address(RVA = "0x69CA680", Offset = "0x69C9680", VA = "0x69CA680")]
	[UnityEngine.Bindings.NativeMethod(Name = "PhysicsMath::Atan2", IsThreadSafe = true)]
	internal static extern float PhysicsMath_Atan2(float y, float x);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600007B")]
	[Address(RVA = "0x69CA6C0", Offset = "0x69C96C0", VA = "0x69CA6C0")]
	[UnityEngine.Bindings.NativeMethod(Name = "PhysicsLowLevel2D::GetBypassLowLevel")]
	[UnityEngine.Bindings.StaticAccessor("GetPhysicsLowLevel2D()", UnityEngine.Bindings.StaticAccessorType.Arrow)]
	internal static extern bool PhysicsGlobal_GetBypassLowLevel();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600007C")]
	[Address(RVA = "0x69CA6F0", Offset = "0x69C96F0", VA = "0x69CA6F0")]
	[UnityEngine.Bindings.NativeMethod(Name = "PhysicsLowLevel2D::IsRenderingAllowed")]
	[UnityEngine.Bindings.StaticAccessor("GetPhysicsLowLevel2D()", UnityEngine.Bindings.StaticAccessorType.Arrow)]
	internal static extern bool PhysicsGlobal_IsRenderingAllowed();

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x69CA720", Offset = "0x69C9720", VA = "0x69CA720")]
	[UnityEngine.Bindings.NativeMethod(Name = "PhysicsWorldManager2D::PopulateWorldTransformWrite")]
	[UnityEngine.Bindings.StaticAccessor("GetPhysicsLowLevel2D()->GetWorldManager2D()", UnityEngine.Bindings.StaticAccessorType.Arrow)]
	internal static int PhysicsGlobal_PopulateWorldTransformWrite(PhysicsWorld world, IntPtr transformAccessArrayIntPtr, Span<PhysicsBody.TransformWriteTween> transformWriteTweensArray)
	{
		return default(int);
	}

	[Token(Token = "0x600007E")]
	[Address(RVA = "0x69CA820", Offset = "0x69C9820", VA = "0x69CA820")]
	[UnityEngine.Bindings.NativeMethod(Name = "PhysicsShape::GetDefaultDefinition", IsThreadSafe = true)]
	internal static PhysicsShapeDefinition PhysicsShape_GetDefaultDefinition(bool useSettings)
	{
		return default(PhysicsShapeDefinition);
	}

	[Token(Token = "0x600007F")]
	[Address(RVA = "0x69CA8F0", Offset = "0x69C98F0", VA = "0x69CA8F0")]
	[UnityEngine.Bindings.NativeMethod(Name = "PhysicsShape::GetDefaultSurfaceMaterial", IsThreadSafe = true)]
	internal static PhysicsShape.SurfaceMaterial PhysicsShape_GetDefaultSurfaceMaterial()
	{
		return default(PhysicsShape.SurfaceMaterial);
	}

	[Token(Token = "0x6000080")]
	[Address(RVA = "0x69CA980", Offset = "0x69C9980", VA = "0x69CA980")]
	[UnityEngine.Bindings.NativeMethod(Name = "PhysicsShape::IsValid", IsThreadSafe = true)]
	internal static bool PhysicsShape_IsValid(PhysicsShape shape)
	{
		return default(bool);
	}

	[Token(Token = "0x6000081")]
	[Address(RVA = "0x69CA9F0", Offset = "0x69C99F0", VA = "0x69CA9F0")]
	[UnityEngine.Bindings.NativeMethod(Name = "PhysicsShape::GetShapeType", IsThreadSafe = true)]
	internal static PhysicsShape.ShapeType PhysicsShape_GetShapeType(PhysicsShape shape)
	{
		return default(PhysicsShape.ShapeType);
	}

	[Token(Token = "0x6000082")]
	[Address(RVA = "0x69CAA60", Offset = "0x69C9A60", VA = "0x69CAA60")]
	[UnityEngine.Bindings.NativeMethod(Name = "PhysicsShape::GetCallbackTarget", IsThreadSafe = true)]
	internal static object PhysicsShape_GetCallbackTarget(PhysicsShape shape)
	{
		return null;
	}

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x69CAAD0", Offset = "0x69C9AD0", VA = "0x69CAAD0")]
	[UnityEngine.Bindings.NativeMethod(Name = "PhysicsLowLevel2D::PhysicsContactId::IsValid", IsThreadSafe = true)]
	internal static bool PhysicsContactId_IsValid(PhysicsShape.ContactId contactId)
	{
		return default(bool);
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x69CAB50", Offset = "0x69C9B50", VA = "0x69CAB50")]
	[UnityEngine.Bindings.NativeMethod(Name = "PhysicsWorld::GetDefaultDefinition", IsThreadSafe = true)]
	internal static PhysicsWorldDefinition PhysicsWorld_GetDefaultDefinition(bool useSettings)
	{
		return default(PhysicsWorldDefinition);
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x69CAC00", Offset = "0x69C9C00", VA = "0x69CAC00")]
	[UnityEngine.Bindings.NativeMethod(Name = "PhysicsWorld::IsValid", IsThreadSafe = true)]
	internal static bool PhysicsWorld_IsValid(PhysicsWorld world)
	{
		return default(bool);
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x69CAC70", Offset = "0x69C9C70", VA = "0x69CAC70")]
	[UnityEngine.Bindings.NativeMethod(Name = "PhysicsWorld::SetTransformWriteTweens", IsThreadSafe = true)]
	internal static void PhysicsWorld_SetTransformWriteTweens(PhysicsWorld world, ReadOnlySpan<PhysicsBody.TransformWriteTween> transformWriteTweens)
	{
	}

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x69CAD60", Offset = "0x69C9D60", VA = "0x69CAD60")]
	[UnityEngine.Bindings.NativeMethod(Name = "PhysicsWorld::GetBodyUpdateCallbackTargets", IsThreadSafe = true)]
	internal static PhysicsCallbacks.BodyUpdateCallbackTargets PhysicsWorld_GetBodyUpdateCallbackTargets(PhysicsWorld world, Allocator allocator)
	{
		return default(PhysicsCallbacks.BodyUpdateCallbackTargets);
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x69CADF0", Offset = "0x69C9DF0", VA = "0x69CADF0")]
	[UnityEngine.Bindings.NativeMethod(Name = "PhysicsWorld::GetTriggerCallbackTargets", IsThreadSafe = true)]
	internal static PhysicsCallbacks.TriggerCallbackTargets PhysicsWorld_GetTriggerCallbackTargets(PhysicsWorld world, Allocator allocator)
	{
		return default(PhysicsCallbacks.TriggerCallbackTargets);
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x69CAEA0", Offset = "0x69C9EA0", VA = "0x69CAEA0")]
	[UnityEngine.Bindings.NativeMethod(Name = "PhysicsWorld::GetContactCallbackTargets", IsThreadSafe = true)]
	internal static PhysicsCallbacks.ContactCallbackTargets PhysicsWorld_GetContactCallbackTargets(PhysicsWorld world, Allocator allocator)
	{
		return default(PhysicsCallbacks.ContactCallbackTargets);
	}

	[Token(Token = "0x600008A")]
	[Address(RVA = "0x69CAF50", Offset = "0x69C9F50", VA = "0x69CAF50")]
	[UnityEngine.Bindings.NativeMethod(Name = "PhysicsWorld::GetJointThresholdCallbackTargets", IsThreadSafe = true)]
	internal static PhysicsCallbacks.JointThresholdCallbackTargets PhysicsWorld_GetJointThresholdCallbackTargets(PhysicsWorld world, Allocator allocator)
	{
		return default(PhysicsCallbacks.JointThresholdCallbackTargets);
	}

	[Token(Token = "0x600008B")]
	[Address(RVA = "0x69CAFE0", Offset = "0x69C9FE0", VA = "0x69CAFE0")]
	[UnityEngine.Bindings.NativeMethod(Name = "PhysicsWorld::GetRenderMaterial", IsThreadSafe = true)]
	internal static Material PhysicsWorld_GetRenderMaterial(string editorResourceName, string playerResourceName)
	{
		return null;
	}

	[Token(Token = "0x600008C")]
	[Address(RVA = "0x69CB330", Offset = "0x69CA330", VA = "0x69CB330")]
	[UnityEngine.Bindings.NativeMethod(Name = "PhysicsWorld::DrawAllWorlds")]
	internal static void PhysicsWorld_DrawAllWorlds(PhysicsAABB drawAABB)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008D")]
	[Address(RVA = "0x69C9B70", Offset = "0x69C8B70", VA = "0x69C9B70")]
	private static extern void PhysicsBody_GetDefaultDefinition_Injected(bool useSettings, out PhysicsBodyDefinition ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008E")]
	[Address(RVA = "0x69C9BF0", Offset = "0x69C8BF0", VA = "0x69C9BF0")]
	private static extern bool PhysicsBody_IsValid_Injected([In] ref PhysicsBody body);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008F")]
	[Address(RVA = "0x69C9C60", Offset = "0x69C8C60", VA = "0x69C9C60")]
	private static extern PhysicsBody.BodyType PhysicsBody_GetBodyType_Injected([In] ref PhysicsBody body);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000090")]
	[Address(RVA = "0x69C9CD0", Offset = "0x69C8CD0", VA = "0x69C9CD0")]
	private static extern object PhysicsBody_GetCallbackTarget_Injected([In] ref PhysicsBody body);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000091")]
	[Address(RVA = "0x69C9D80", Offset = "0x69C8D80", VA = "0x69C9D80")]
	private static extern void PhysicsChain_GetDefaultDefinition_Injected(bool useSettings, out PhysicsChainDefinition ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000092")]
	[Address(RVA = "0x69C9E00", Offset = "0x69C8E00", VA = "0x69C9E00")]
	private static extern bool PhysicsJoint_IsValid_Injected([In] ref PhysicsJoint joint);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000093")]
	[Address(RVA = "0x69C9E70", Offset = "0x69C8E70", VA = "0x69C9E70")]
	private static extern PhysicsJoint.JointType PhysicsJoint_GetJointType_Injected([In] ref PhysicsJoint joint);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000094")]
	[Address(RVA = "0x69C9EE0", Offset = "0x69C8EE0", VA = "0x69C9EE0")]
	private static extern object PhysicsJoint_GetCallbackTarget_Injected([In] ref PhysicsJoint joint);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000095")]
	[Address(RVA = "0x69C9FD0", Offset = "0x69C8FD0", VA = "0x69C9FD0")]
	private static extern void DistanceJoint_GetDefaultDefinition_Injected(bool useSettings, out PhysicsDistanceJointDefinition ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000096")]
	[Address(RVA = "0x69CA0C0", Offset = "0x69C90C0", VA = "0x69CA0C0")]
	private static extern void RelativeJoint_GetDefaultDefinition_Injected(bool useSettings, out PhysicsRelativeJointDefinition ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000097")]
	[Address(RVA = "0x69CA1A0", Offset = "0x69C91A0", VA = "0x69CA1A0")]
	private static extern void SliderJoint_GetDefaultDefinition_Injected(bool useSettings, out PhysicsSliderJointDefinition ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000098")]
	[Address(RVA = "0x69CA280", Offset = "0x69C9280", VA = "0x69CA280")]
	private static extern void HingeJoint_GetDefaultDefinition_Injected(bool useSettings, out PhysicsHingeJointDefinition ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000099")]
	[Address(RVA = "0x69CA360", Offset = "0x69C9360", VA = "0x69CA360")]
	private static extern void FixedJoint_GetDefaultDefinition_Injected(bool useSettings, out PhysicsFixedJointDefinition ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600009A")]
	[Address(RVA = "0x69CA440", Offset = "0x69C9440", VA = "0x69CA440")]
	private static extern void WheelJoint_GetDefaultDefinition_Injected(bool useSettings, out PhysicsWheelJointDefinition ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600009B")]
	[Address(RVA = "0x69CA4D0", Offset = "0x69C94D0", VA = "0x69CA4D0")]
	private static extern void PhysicsRotate_CreateAngle_Injected(float angle, out PhysicsRotate ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600009C")]
	[Address(RVA = "0x69CA560", Offset = "0x69C9560", VA = "0x69CA560")]
	private static extern bool PhysicsRotate_IsValid_Injected([In] ref PhysicsRotate rotation);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600009D")]
	[Address(RVA = "0x69CA5D0", Offset = "0x69C95D0", VA = "0x69CA5D0")]
	private static extern float PhysicsRotate_GetAngle_Injected([In] ref PhysicsRotate rotate);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600009E")]
	[Address(RVA = "0x69CA650", Offset = "0x69C9650", VA = "0x69CA650")]
	private static extern bool PhysicsAABB_IsValid_Injected([In] ref PhysicsAABB aabb);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600009F")]
	[Address(RVA = "0x69CA7E0", Offset = "0x69C97E0", VA = "0x69CA7E0")]
	private static extern int PhysicsGlobal_PopulateWorldTransformWrite_Injected([In] ref PhysicsWorld world, IntPtr transformAccessArrayIntPtr, ref UnityEngine.Bindings.ManagedSpanWrapper transformWriteTweensArray);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x69CA8B0", Offset = "0x69C98B0", VA = "0x69CA8B0")]
	private static extern void PhysicsShape_GetDefaultDefinition_Injected(bool useSettings, out PhysicsShapeDefinition ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x69CA950", Offset = "0x69C9950", VA = "0x69CA950")]
	private static extern void PhysicsShape_GetDefaultSurfaceMaterial_Injected(out PhysicsShape.SurfaceMaterial ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x69CA9C0", Offset = "0x69C99C0", VA = "0x69CA9C0")]
	private static extern bool PhysicsShape_IsValid_Injected([In] ref PhysicsShape shape);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x69CAA30", Offset = "0x69C9A30", VA = "0x69CAA30")]
	private static extern PhysicsShape.ShapeType PhysicsShape_GetShapeType_Injected([In] ref PhysicsShape shape);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x69CAAA0", Offset = "0x69C9AA0", VA = "0x69CAAA0")]
	private static extern object PhysicsShape_GetCallbackTarget_Injected([In] ref PhysicsShape shape);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x69CAB20", Offset = "0x69C9B20", VA = "0x69CAB20")]
	private static extern bool PhysicsContactId_IsValid_Injected([In] ref PhysicsShape.ContactId contactId);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x69CABC0", Offset = "0x69C9BC0", VA = "0x69CABC0")]
	private static extern void PhysicsWorld_GetDefaultDefinition_Injected(bool useSettings, out PhysicsWorldDefinition ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x69CAC40", Offset = "0x69C9C40", VA = "0x69CAC40")]
	private static extern bool PhysicsWorld_IsValid_Injected([In] ref PhysicsWorld world);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000A8")]
	[Address(RVA = "0x69CAD20", Offset = "0x69C9D20", VA = "0x69CAD20")]
	private static extern void PhysicsWorld_SetTransformWriteTweens_Injected([In] ref PhysicsWorld world, ref UnityEngine.Bindings.ManagedSpanWrapper transformWriteTweens);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000A9")]
	[Address(RVA = "0x69CADB0", Offset = "0x69C9DB0", VA = "0x69CADB0")]
	private static extern void PhysicsWorld_GetBodyUpdateCallbackTargets_Injected([In] ref PhysicsWorld world, Allocator allocator, out PhysicsCallbacks.BodyUpdateCallbackTargets ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000AA")]
	[Address(RVA = "0x69CAE60", Offset = "0x69C9E60", VA = "0x69CAE60")]
	private static extern void PhysicsWorld_GetTriggerCallbackTargets_Injected([In] ref PhysicsWorld world, Allocator allocator, out PhysicsCallbacks.TriggerCallbackTargets ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000AB")]
	[Address(RVA = "0x69CAF10", Offset = "0x69C9F10", VA = "0x69CAF10")]
	private static extern void PhysicsWorld_GetContactCallbackTargets_Injected([In] ref PhysicsWorld world, Allocator allocator, out PhysicsCallbacks.ContactCallbackTargets ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000AC")]
	[Address(RVA = "0x69CAFA0", Offset = "0x69C9FA0", VA = "0x69CAFA0")]
	private static extern void PhysicsWorld_GetJointThresholdCallbackTargets_Injected([In] ref PhysicsWorld world, Allocator allocator, out PhysicsCallbacks.JointThresholdCallbackTargets ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000AD")]
	[Address(RVA = "0x69CB2F0", Offset = "0x69CA2F0", VA = "0x69CB2F0")]
	private static extern IntPtr PhysicsWorld_GetRenderMaterial_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper editorResourceName, ref UnityEngine.Bindings.ManagedSpanWrapper playerResourceName);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000AE")]
	[Address(RVA = "0x69CB380", Offset = "0x69CA380", VA = "0x69CB380")]
	private static extern void PhysicsWorld_DrawAllWorlds_Injected([In] ref PhysicsAABB drawAABB);
}
