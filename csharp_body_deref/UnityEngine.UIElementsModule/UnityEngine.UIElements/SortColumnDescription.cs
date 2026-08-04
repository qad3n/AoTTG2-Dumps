// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.SortColumnDescription
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Serializable]
[Token(Token = "0x20000E5")]
public class SortColumnDescription
{
	[Token(Token = "0x20000E6")]
	internal class UxmlObjectFactory<T> : UxmlObjectFactory<T, UxmlObjectTraits<T>> where T : SortColumnDescription, new()
	{
		[Token(Token = "0x600065E")]
		public UxmlObjectFactory()
		{
		}
	}

	[Token(Token = "0x20000E7")]
	internal class UxmlObjectFactory : UxmlObjectFactory<SortColumnDescription>
	{
		[Token(Token = "0x600065F")]
		[Address(RVA = "0x4FF0150", Offset = "0x4FF0150", VA = "0x4FF0150")]
		public UxmlObjectFactory()
		{
		}
	}

	[Token(Token = "0x20000E8")]
	internal class UxmlObjectTraits<T> : UnityEngine.UIElements.UxmlObjectTraits<T> where T : SortColumnDescription
	{
		[Token(Token = "0x40003D0")]
		[FieldOffset(Offset = "0x0")]
		private readonly UxmlStringAttributeDescription m_ColumnName;

		[Token(Token = "0x40003D1")]
		[FieldOffset(Offset = "0x0")]
		private readonly UxmlIntAttributeDescription m_ColumnIndex;

		[Token(Token = "0x40003D2")]
		[FieldOffset(Offset = "0x0")]
		private readonly UxmlEnumAttributeDescription<SortDirection> m_SortDescription;

		[Token(Token = "0x6000660")]
		public override void Init(ref T obj, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x6000661")]
		public UxmlObjectTraits()
		{
		}
	}

	[Token(Token = "0x40003CB")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	private int m_ColumnIndex;

	[Token(Token = "0x40003CC")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	private string m_ColumnName;

	[Token(Token = "0x40003CD")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private SortDirection m_SortDirection;

	[Token(Token = "0x17000118")]
	public string columnName
	{
		[Token(Token = "0x6000651")]
		[Address(RVA = "0x4FEFDD0", Offset = "0x4FEFDD0", VA = "0x4FEFDD0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000652")]
		[Address(RVA = "0x4FEFDE0", Offset = "0x4FEFDE0", VA = "0x4FEFDE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000119")]
	public int columnIndex
	{
		[Token(Token = "0x6000653")]
		[Address(RVA = "0x4FEFE40", Offset = "0x4FEFE40", VA = "0x4FEFE40")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000654")]
		[Address(RVA = "0x4FEFE50", Offset = "0x4FEFE50", VA = "0x4FEFE50")]
		set
		{
		}
	}

	[Token(Token = "0x1700011A")]
	public Column column
	{
		[Token(Token = "0x6000655")]
		[Address(RVA = "0x4FEFE80", Offset = "0x4FEFE80", VA = "0x4FEFE80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000656")]
		[Address(RVA = "0x4FEFE90", Offset = "0x4FEFE90", VA = "0x4FEFE90")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x1700011B")]
	public SortDirection direction
	{
		[Token(Token = "0x6000657")]
		[Address(RVA = "0x4FEFEA0", Offset = "0x4FEFEA0", VA = "0x4FEFEA0")]
		get
		{
			return default(SortDirection);
		}
		[Token(Token = "0x6000658")]
		[Address(RVA = "0x4FEFEB0", Offset = "0x4FEFEB0", VA = "0x4FEFEB0")]
		set
		{
		}
	}

	[Token(Token = "0x14000019")]
	internal event Action<SortColumnDescription> changed
	{
		[Token(Token = "0x6000659")]
		[Address(RVA = "0x4FEFEE0", Offset = "0x4FEFEE0", VA = "0x4FEFEE0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600065A")]
		[Address(RVA = "0x4FEFF90", Offset = "0x4FEFF90", VA = "0x4FEFF90")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x600065B")]
	[Address(RVA = "0x4FF0040", Offset = "0x4FF0040", VA = "0x4FF0040")]
	public SortColumnDescription()
	{
	}

	[Token(Token = "0x600065C")]
	[Address(RVA = "0x4FF0050", Offset = "0x4FF0050", VA = "0x4FF0050")]
	public SortColumnDescription(int columnIndex, SortDirection direction)
	{
	}

	[Token(Token = "0x600065D")]
	[Address(RVA = "0x4FF00C0", Offset = "0x4FF00C0", VA = "0x4FF00C0")]
	public SortColumnDescription(string columnName, SortDirection direction)
	{
	}
}
