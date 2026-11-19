// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.LowLevelPhysics2D.PhysicsLowLevelSettings2D
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.LowLevelPhysics2D;

[Serializable]
[Token(Token = "0x200000C")]
[UnityEngine.Scripting.RequiredByNativeCode]
public sealed class PhysicsLowLevelSettings2D : ScriptableObject
{
	[Token(Token = "0x400002E")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	[Header("Layers")]
	private PhysicsLayers.LayerNames m_PhysicsLayerNames;

	[Token(Token = "0x400002F")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private bool m_UseFullLayers;

	[Token(Token = "0x4000030")]
	[FieldOffset(Offset = "0x24")]
	[SerializeField]
	[Header("Default Definitions")]
	private PhysicsWorldDefinition m_PhysicsWorldDefinition;

	[Token(Token = "0x4000031")]
	[FieldOffset(Offset = "0x35C")]
	[SerializeField]
	private PhysicsBodyDefinition m_PhysicsBodyDefinition;

	[Token(Token = "0x4000032")]
	[FieldOffset(Offset = "0x3A0")]
	[SerializeField]
	private PhysicsShapeDefinition m_PhysicsShapeDefinition;

	[Token(Token = "0x4000033")]
	[FieldOffset(Offset = "0x3F0")]
	[SerializeField]
	private PhysicsChainDefinition m_PhysicsChainDefinition;

	[Token(Token = "0x4000034")]
	[FieldOffset(Offset = "0x430")]
	[SerializeField]
	private PhysicsDistanceJointDefinition m_PhysicsDistanceJointDefinition;

	[Token(Token = "0x4000035")]
	[FieldOffset(Offset = "0x4A8")]
	[SerializeField]
	private PhysicsFixedJointDefinition m_PhysicsFixedJointDefinition;

	[Token(Token = "0x4000036")]
	[FieldOffset(Offset = "0x500")]
	[SerializeField]
	private PhysicsHingeJointDefinition m_PhysicsHingeJointDefinition;

	[Token(Token = "0x4000037")]
	[FieldOffset(Offset = "0x570")]
	[SerializeField]
	private PhysicsRelativeJointDefinition m_PhysicsRelativeJointDefinition;

	[Token(Token = "0x4000038")]
	[FieldOffset(Offset = "0x5E4")]
	[SerializeField]
	private PhysicsSliderJointDefinition m_PhysicsSliderJointDefinition;

	[Token(Token = "0x4000039")]
	[FieldOffset(Offset = "0x654")]
	[SerializeField]
	private PhysicsWheelJointDefinition m_PhysicsWheelJointDefinition;

	[Token(Token = "0x400003A")]
	[FieldOffset(Offset = "0x6C0")]
	[SerializeField]
	[Range(1f, 64f)]
	[Header("Globals")]
	private int m_ConcurrentSimulations;

	[Token(Token = "0x400003B")]
	[FieldOffset(Offset = "0x6C4")]
	[Min(1E-05f)]
	[SerializeField]
	private float m_LengthUnitsPerMeter;

	[Token(Token = "0x400003C")]
	[FieldOffset(Offset = "0x6C8")]
	[SerializeField]
	private bool m_DrawInBuild;

	[Token(Token = "0x400003D")]
	[FieldOffset(Offset = "0x6C9")]
	[SerializeField]
	private bool m_BypassLowLevel;

	[Token(Token = "0x1700000B")]
	public PhysicsLayers.LayerNames physicsLayerNames
	{
		[Token(Token = "0x6000044")]
		[Address(RVA = "0x69C9500", Offset = "0x69C8500", VA = "0x69C9500")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000045")]
		[Address(RVA = "0x69C9510", Offset = "0x69C8510", VA = "0x69C9510")]
		set
		{
		}
	}

	[Token(Token = "0x1700000C")]
	public bool useFullLayers
	{
		[Token(Token = "0x6000046")]
		[Address(RVA = "0x69C9520", Offset = "0x69C8520", VA = "0x69C9520")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000047")]
		[Address(RVA = "0x69C9530", Offset = "0x69C8530", VA = "0x69C9530")]
		set
		{
		}
	}

	[Token(Token = "0x1700000D")]
	public PhysicsWorldDefinition physicsWorldDefinition
	{
		[Token(Token = "0x6000048")]
		[Address(RVA = "0x69C9540", Offset = "0x69C8540", VA = "0x69C9540")]
		get
		{
			return default(PhysicsWorldDefinition);
		}
		[Token(Token = "0x6000049")]
		[Address(RVA = "0x69C9560", Offset = "0x69C8560", VA = "0x69C9560")]
		set
		{
		}
	}

	[Token(Token = "0x1700000E")]
	public PhysicsBodyDefinition physicsBodyDefinition
	{
		[Token(Token = "0x600004A")]
		[Address(RVA = "0x69C9580", Offset = "0x69C8580", VA = "0x69C9580")]
		get
		{
			return default(PhysicsBodyDefinition);
		}
		[Token(Token = "0x600004B")]
		[Address(RVA = "0x69C95C0", Offset = "0x69C85C0", VA = "0x69C95C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000F")]
	public PhysicsShapeDefinition physicsShapeDefinition
	{
		[Token(Token = "0x600004C")]
		[Address(RVA = "0x69C9600", Offset = "0x69C8600", VA = "0x69C9600")]
		get
		{
			return default(PhysicsShapeDefinition);
		}
		[Token(Token = "0x600004D")]
		[Address(RVA = "0x69C9640", Offset = "0x69C8640", VA = "0x69C9640")]
		set
		{
		}
	}

	[Token(Token = "0x17000010")]
	public PhysicsChainDefinition physicsChainDefinition
	{
		[Token(Token = "0x600004E")]
		[Address(RVA = "0x69C9680", Offset = "0x69C8680", VA = "0x69C9680")]
		get
		{
			return default(PhysicsChainDefinition);
		}
		[Token(Token = "0x600004F")]
		[Address(RVA = "0x69C96B0", Offset = "0x69C86B0", VA = "0x69C96B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000011")]
	[Range(1f, 64f)]
	public int concurrentSimulations
	{
		[Token(Token = "0x6000050")]
		[Address(RVA = "0x69C96F0", Offset = "0x69C86F0", VA = "0x69C96F0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000051")]
		[Address(RVA = "0x69C9700", Offset = "0x69C8700", VA = "0x69C9700")]
		set
		{
		}
	}

	[Token(Token = "0x17000012")]
	public float lengthUnitsPerMeter
	{
		[Token(Token = "0x6000052")]
		[Address(RVA = "0x69C9720", Offset = "0x69C8720", VA = "0x69C9720")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000053")]
		[Address(RVA = "0x69C9730", Offset = "0x69C8730", VA = "0x69C9730")]
		set
		{
		}
	}

	[Token(Token = "0x17000013")]
	public bool drawInBuild
	{
		[Token(Token = "0x6000054")]
		[Address(RVA = "0x69C9750", Offset = "0x69C8750", VA = "0x69C9750")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000055")]
		[Address(RVA = "0x69C9760", Offset = "0x69C8760", VA = "0x69C9760")]
		set
		{
		}
	}

	[Token(Token = "0x17000014")]
	public bool bypassLowLevel
	{
		[Token(Token = "0x6000056")]
		[Address(RVA = "0x69C9770", Offset = "0x69C8770", VA = "0x69C9770")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000057")]
		[Address(RVA = "0x69C9780", Offset = "0x69C8780", VA = "0x69C9780")]
		set
		{
		}
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x69C8390", Offset = "0x69C7390", VA = "0x69C8390")]
	public PhysicsLowLevelSettings2D()
	{
	}

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x69C83B0", Offset = "0x69C73B0", VA = "0x69C83B0")]
	private void Reset()
	{
	}

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x69C9790", Offset = "0x69C8790", VA = "0x69C9790")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void GetPhysicsLayerNames(out PhysicsLayers.LayerNames layerNames)
	{
	}

	[Token(Token = "0x6000059")]
	[Address(RVA = "0x69C97B0", Offset = "0x69C87B0", VA = "0x69C97B0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void GetPhysicsWorldDefinition(out PhysicsWorldDefinition definition)
	{
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x69C97D0", Offset = "0x69C87D0", VA = "0x69C97D0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void GetPhysicsBodyDefinition(out PhysicsBodyDefinition definition)
	{
	}

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x69C9810", Offset = "0x69C8810", VA = "0x69C9810")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void GetPhysicsShapeDefinition(out PhysicsShapeDefinition definition)
	{
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x69C9850", Offset = "0x69C8850", VA = "0x69C9850")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void GetPhysicsChainDefinition(out PhysicsChainDefinition definition)
	{
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x69C9880", Offset = "0x69C8880", VA = "0x69C9880")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void GetPhysicsDistanceJointDefinition(out PhysicsDistanceJointDefinition definition)
	{
	}

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x69C98E0", Offset = "0x69C88E0", VA = "0x69C98E0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void GetPhysicsFixedJointDefinition(out PhysicsFixedJointDefinition definition)
	{
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x69C9930", Offset = "0x69C8930", VA = "0x69C9930")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void GetPhysicsHingeJointDefinition(out PhysicsHingeJointDefinition definition)
	{
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x69C9980", Offset = "0x69C8980", VA = "0x69C9980")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void GetPhysicsRelativeJointDefinition(out PhysicsRelativeJointDefinition definition)
	{
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x69C99E0", Offset = "0x69C89E0", VA = "0x69C99E0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void GetPhysicsSliderJointDefinition(out PhysicsSliderJointDefinition definition)
	{
	}

	[Token(Token = "0x6000062")]
	[Address(RVA = "0x69C9A30", Offset = "0x69C8A30", VA = "0x69C9A30")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void GetPhysicsWheelJointDefinition(out PhysicsWheelJointDefinition definition)
	{
	}

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x69C9A90", Offset = "0x69C8A90", VA = "0x69C9A90")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private int GetConcurrentSimulations()
	{
		return default(int);
	}

	[Token(Token = "0x6000064")]
	[Address(RVA = "0x69C9AA0", Offset = "0x69C8AA0", VA = "0x69C9AA0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private float GetLengthUnitsPerMeter()
	{
		return default(float);
	}

	[Token(Token = "0x6000065")]
	[Address(RVA = "0x69C9AB0", Offset = "0x69C8AB0", VA = "0x69C9AB0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private bool GetDrawInBuild()
	{
		return default(bool);
	}

	[Token(Token = "0x6000066")]
	[Address(RVA = "0x69C9AC0", Offset = "0x69C8AC0", VA = "0x69C9AC0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private bool GetBypassLowLevel()
	{
		return default(bool);
	}

	[Token(Token = "0x6000067")]
	[Address(RVA = "0x69C9AD0", Offset = "0x69C8AD0", VA = "0x69C9AD0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private bool GetUseFullLayers()
	{
		return default(bool);
	}
}
